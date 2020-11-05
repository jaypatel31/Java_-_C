//*Psuedo code to evaluate a postfix expression.*
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 10
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
char pop();
int operation(int op1,int op2, char exp);
//**********MAIN FUNCTION*********
int main(){
    int option =1,choice,new_elem,num,dip;
    char exp[20];
    s.top = -1;
    int i =0,op1,op2,ans;
    printf("Enter The Postfix Expression : ");
    gets(exp);
    while(exp[i]!='\0'){
        if(isdigit(exp[i])){
            push(exp[i]-48);
        }
        else{
            op2 = pop();
            op1= pop();
            ans = operation(op2,op1,exp[i]);
            push(ans);
        }
        i++;
    }
traverse();
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
char pop(void){
    if(!isEmpty()){
        return s.elem[s.top--];
    }
    return -1;
}
//*******Operation FUNC************

int operation(int op1,int op2, char exp){
        if(exp == '+'){
            return (op1+op2);
           }
           else if(exp == '-'){
            return (op2-op1);
           }
           else if(exp == '*'){
            return (op1*op2);
           }
           else if(exp == '/'){
            return (op2/op1);
           }
           else if(exp == '$'){
            return pow(op2,op1);
           }
}
void traverse(void){
    int i;
        for(i=s.top;i>=0;i--){
            printf("%d",s.elem[i]);
        }
}
