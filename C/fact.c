#include <stdio.h>
void main(){
    int i;
    int fact = 1;
    int num;
    printf("Enter The Value to be factorial : ");
    scanf("%d",&num);
    for(i=num;i>0;i--){
        fact = fact*i;
        printf(" %d ",i);
        if(i!=1){
            printf("*");
        }
    }
    printf(" = ");
    printf("%d",fact);
}
