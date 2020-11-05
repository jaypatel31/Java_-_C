#include<stdio.h>
#include<conio.h>

void  main(){
    int array1[6];
    int array2[7];
    int combineArray[13];
    int i = 0,j=0,k=0,e=0,f=0,u=0;
    for(i=0;i<6;i++){
        printf("Enter the 6 values :");
        scanf("%d",&array1[i]);
        combineArray[k++] = array1[i];
    }
    for(j=0;j<7;j++){
        printf("Enter the 7 values :");
        scanf("%d",&array2[j]);
        combineArray[k++] = array2[j];
    }
    for(e=0;e<k;e++){
        for(f=e+1;f<k;f++){
            if(combineArray[e]>combineArray[f]){
                int temp = combineArray[e];
                combineArray[e] = combineArray[f];
                combineArray[f] = temp;
            }
        }
    }
    for(u=0;u<k;u++){
        printf("%d , ",combineArray[u]);
    }
}
