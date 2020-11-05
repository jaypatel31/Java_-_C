//*Pusedo code to check a palindrome string with stack.*
#include <stdio.h>
#define MAX 20
//*******STRUCUTRE********
struct stack {
    char elem[MAX];
    char rev[MAX];
    int top;
};
typedef struct stack STACK;
STACK s;
//**********ALL FUNCTION*********
void push(char new_elem);
int isFull();
int isEmpty();
int pop();
void traverse();
//**********MAIN FUNCTION*********
int main(){
    int option =1,i=0,choice,new_elem,num,dip;
    s.top = -1;
    printf("Enter The String : ");
    gets(s.elem);
    while(s.elem[i]!='\0'){
        push(s.elem[i]);
        i++;
    }
    traverse();
    int k=0,j=0;
    while(s.elem[k]!='\0'){
        if(s.elem[k]==s.rev[k]){
            j++;
        }
        k++;
    }
    if(k==j){
        printf("\nString Is Pelindrom");
    }
    else{
        printf("\nString Is Not Pelindrom");
    }
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
void push(char new_elem){
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
//*******TRAVERSE FUNC************
void traverse(void){
    int i,k=0;
    printf("\nReverse : ");
    if(!isEmpty()){
        for(i=s.top;i>=0;i--){
            s.rev[k++] = s.elem[i];
            printf("%c",s.elem[i]);
        }
    }
}
