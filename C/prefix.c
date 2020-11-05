//*Psuedo code to convert infix expression into prefix.*
#include <stdio.h>
#include <string.h>
#define MAX 5
//*******STRUCUTRE********
struct stack {
    char elem[MAX];
    int top;
    char Rname[20];
};
typedef struct stack STACK;
STACK s;
//**********ALL FUNCTION*********
void push(char new_elem);
int isFull();
int isEmpty();
char pop();
int proprity(char oper);
void reverse(char str1[]);
//**********MAIN FUNCTION*********
int main(){
    int option =1,choice,new_elem,num,dip;
    char exp[20];
    s.top = -1;
    int i =0,k=0;
    char ch[10];
    char op;
    printf("Enter The Expression : ");
    gets(exp);
    reverse(exp);

    while(s.Rname[i] != '\0'){
        if(isalnum(s.Rname[i])){
           // printf("%c",s.Rname[i]);
            ch[k]= s.Rname[i];
            k++;
        }
        else if(s.Rname[i] == ')'){
                    push(s.Rname[i]);
        }
        else if(s.Rname[i] == '('){
            while(s.elem[s.top] != ')'){
                op = pop();
                ch[k] = op;
                k++;
                //printf("%c",op);
            }
            pop();
            //traverse();
        }
         else if(s.Rname[i]=='$'){
                 while(proprity(s.Rname[i])<=proprity(s.elem[s.top]) ){
                    op = pop();
                    ch[k] = op;
                    k++;
                     //printf("%c",op);
                }
                 push(s.Rname[i]);
            }
        else{
            if(s.top == -1|| s.elem[s.top]==')'){
                push(s.Rname[i]);
            }
            else if(proprity(s.Rname[i])==proprity(s.elem[s.top])){
                push(s.Rname[i]);
            }

            else{
                while(proprity(s.Rname[i])<proprity(s.elem[s.top])){
                    op = pop();
                    ch[k] = op;
                    k++;
                     //printf("%c",op);
                }
                push(s.Rname[i]);
            }

        }
        i++;

    }
    int j;
    traverse();
 for(j=k-1;j>=0;j--){
    printf("%c",ch[j]);
 }
}
//********MAIN FUNCTION END************
void reverse(char exp[]){
    int a;
    int b,i,c,e;
    a =0;
    while(exp[a] != '\0'){
        a++;
    }
    b=0;
    for(i=a-1;i>=0;i--){
        s.Rname[b] = exp[i];
        b++;
    }
    s.Rname[b] = '\0';

}
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
        if(oper == ')'){
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
        for(i=0;i<=s.top;i++){
            printf("%c",s.elem[i]);
        }
}
