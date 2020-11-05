#include <stdio.h>
#define MAX 5
//*******STRUCUTRE********
struct stack {
    int elem[MAX];
    int top;
};
typedef struct stack STACK;
STACK s;
//**********ALL FUNCTION*********
void push(int new_elem);
int isFull();
int isEmpty();
int pop();
int peek();
void traverse();
//**********MAIN FUNCTION*********
int main(){
    int option =1,choice,new_elem,num,dip;
    s.top = -1;
    top:
    while(option){
        printf("\n\n*************STACK OP**************");
        printf("\n1 ===> PUSH\n");
        printf("\n2 ===> POP\n");
        printf("\n3 ===> PEEK\n");
        printf("\n4 ===> TRAVERSE\n");
        printf("\n5 ===> EXIT\n");
        printf("***********************************");
        option =0;
    }
    printf("\nEnter the Value to Perform Operation : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter the Value to Push: ");
            scanf("%d",&new_elem);
            push(new_elem);
            break;
        case 2:
            num = pop();
            if(num!= -1){
                printf("\nElement Which is Poped : %d",num);
            }
            break;
        case 3:
             dip = peek();
             printf("\nTop Element In The Stack : %d",dip);
             break;
        case 4:
            traverse();
            break;
        case 5:
            printf("\nThanks for Visit");
            return 0;
    }
    printf("\nTo Continue Press 1 : ");
    scanf("%d",&option);
    goto top;
}
//********MAIN FUNCTION END************
//*******ISFULL FUNC************
int isFull(void){
    if(s.top == MAX-1){
        return 1;
    }
    return 0;
}
//*******ISEMPTY FUNC************
int isEmpty(){
    if(s.top == -1){
        return 1;
    }
    return 0;
}
//*******PUSH FUNC************
void push(int new_elem){
    if(!isFull()){
        s.elem[++s.top] = new_elem;
    }
    else{
        printf("\nSTACK OVERFLOW\n");
    }
}
//*******POP FUNC************
int pop(void){
    if(!isEmpty()){
        return s.elem[s.top--];
    }
    return -1;
}
//*******PEEK FUNC************
int peek(void){
    return s.elem[s.top];
}
//*******TRAVERSE FUNC************
void traverse(void){
    int i;
    if(!isEmpty()){
        for(i=s.top;i>=0;i--){
            printf("\nStack %d : %d",i,s.elem[i]);
        }
    }
}
