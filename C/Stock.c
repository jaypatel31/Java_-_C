#include <stdio.h>
#define CONST 10
void main(){
    int stock[CONST];
    int i,min,max=0,maxkey=0,minkey = 0,profit;
    printf("Enter 10 Prices Of Stock : ");
    for(i=0;i<CONST;i++){
        scanf("%d",&stock[i]);
    }
    min = stock[0];
    printf("\nFull Stock Prices = { ");
    for(i=0;i<CONST;i++){
        if(max<stock[i]){
            max= stock[i];
            maxkey = i;
        }
        if(min>stock[i]){
            min = stock[i];
            minkey = i;
        }
        printf("%d,",stock[i]);
    }
    printf("}");
    profit = max-min;
    printf("\nBuy on - %d sell on - %d Profit = %d",minkey+1,maxkey+1,profit);
}
