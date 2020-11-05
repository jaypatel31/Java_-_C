#include <stdio.h>
void main(){
    int i,j,size=0;
    char sparc[5][6] =
    {
        {0 , 0 , 0 , 0 , 9, 0 },
        {0 , 8 , 0 , 0 , 0, 0 },
        {4 , 0 , 0 , 2 , 0, 0 },
        {0 , 0 , 0 , 0 , 0, 5 },
        {0 , 0 , 2 , 0 , 0, 0 }
    };
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            printf("\t%d",sparc[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            if(sparc[i][j]!=0){
                size++;
            }
        }
    }
    char newm[3][size];
    int k =0;
     for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            if(sparc[i][j]!=0){
                newm[0][k] = i;
                newm[1][k] =j;
                newm[2][k]=sparc[i][j];
                k++;
            }
        }
    }
    printf("\nNew MAtrix\n");
     for(i=0;i<3;i++){
        for(j=0;j<size;j++){
            printf("\t%d",newm[i][j]);

        }
        printf("\n");
    }
}
