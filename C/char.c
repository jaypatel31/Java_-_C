#include <stdio.h>
#include <string.h>
void stringprint(char str[],int op);
void main(){
    char str[20];
    int op =0;
    printf("Enter The String : ");
    gets(str);
    printf("Press 1 For Odd and 0 For even : ");
    scanf("%d",&op);
    stringprint(str,op);
}
void stringprint(char str[],int op){
    int i;
    for(i=0;i<strlen(str);i++){
        if(op==0){
            if(i%2 !=0){
                printf("%c",str[i]);
            }
        }
        else if(op==1){
            if(i%2==0){
                printf("%c",str[i]);
            }
        }
        else{
            printf("\nPLEASE ENTER VALID OPERATION!!\n");
            break;
        }
    }
}
