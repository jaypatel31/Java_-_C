#include <stdio.h>
#define MAX 5
//*******STRUCUTRE********
struct stack {
    int elem[MAX];
    int front,rear;
};
typedef struct stack STACK;
STACK s;
//**********ALL FUNCTION*********
void enqueue(int new_elem);
int isFull();
int isEmpty();
int dequeue();
int peek();
void traverse();
//**********MAIN FUNCTION*********
int main(){
    int option =1,choice,new_elem,num,dip;
    s.front = -1;
    s.rear = -1;
    top:
    while(option){
        printf("\n\n*************QUEUE OP**************");
        printf("\n1 ===> ENQUEUE\n");
        printf("\n2 ===> DEQUEUE\n");
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
            printf("Enter the Value to EnQueue: ");
            scanf("%d",&new_elem);
            enqueue(new_elem);
            break;
        case 2:
            num = dequeue();
            if(num!= -1){
                printf("\nElement Which is DeQueue : %d",num);
            }
            break;
        case 3:
             dip = peek();
             printf("\nFront Element In The Queue : %d",dip);
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
    if(s.rear == MAX-1){
        return 1;
    }
    return 0;
}
//*******ISEMPTY FUNC************
int isEmpty(){
    if(s.front == -1 || s.front>s.rear){
        return 1;
    }
    return 0;
}
//*******PUSH FUNC************
void enqueue(int new_elem){
    if(!isFull()){
        s.elem[++s.rear] = new_elem;
         if(s.front==-1){
            s.front=0;
        }
    }

    else{
        printf("\nQueue OVERFLOW\n");
    }
}
//*******POP FUNC************
int dequeue(void){
    if(!isEmpty()){
        return s.elem[s.front++];
    }
    return -1;
}
//*******PEEK FUNC************
int peek(void){
    return s.elem[s.front];
}
//*******TRAVERSE FUNC************
void traverse(void){
    int i;
    if(!isEmpty()){
        for(i=s.front;i<=s.rear;i++){
            printf("\nQueue %d : %d",i,s.elem[i]);
        }
    }
}
