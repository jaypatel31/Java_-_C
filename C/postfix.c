#include <stdio.h>
#include <string.h>
#define MAX 5
//*******STRUCUTRE********
struct stack {
    char elem[MAX];
    int top;

};
typedef struct stack STACK;
STACK s;
//**********ALL FUNCTION*********
void push(char new_elem);
int isFull();
int isEmpty();
char pop();
int proprity(char oper);
//**********MAIN FUNCTION*********
int main(){
    int option =1,choice,new_elem,num,dip;
    char exp[20];
    s.top = -1;
    int i =0;
    char op;
    printf("Enter The Expression : ");
    gets(exp);
    while(exp[i] != '\0'){
        if(isalnum(exp[i])){
            printf("%c",exp[i]);
        }
        else if(exp[i] == '('){
                    push(exp[i]);
        }
        else if(exp[i] == ')'){
            while(s.elem[s.top] != '('){
                op = pop();
                printf("%c",op);
            }
            pop();
            //traverse();
        }
        else{
            if(s.top == -1|| s.elem[s.top]=='('){
                push(exp[i]);
            }
            else{
                while(proprity(exp[i])<=proprity(s.elem[s.top]) && exp[i]!='$'){
                    op = pop();
                     printf("%c",op);
                }
                push(exp[i]);
            }

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
void push(char new_elem){
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
//*******Prioroty FUNC************

int proprity(char oper){
        if(oper == '('){
            return 0;
           }
           else if(oper == '+' || oper == '-'){
            return 1;
           }
           if(oper == '*' || oper == '/'){
            return 2;
           }
           if(oper == '$'){
            return 3;
           }
}
void traverse(void){
    int i;
        for(i=s.top;i>=0;i--){
            printf("%c",s.elem[i]);
        }
}
