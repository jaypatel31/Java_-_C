#include <stdio.h>
void main(){
    int i,j,k=0,l=0,u=0,m=0,maxR=0,maxC=0,size=0;
    int row[10],column[10],value[10];
    int elem,rows5;
    elem =6,rows5=3;
    char sparc[3][6] =
    {0,0,1,1,3,3,
    2,4,2,3,1,2,
    3,4,5,7,2,6};
     for(i=0;i<3;i++){
        for(j=0;j<elem;j++){
            if(i==0){
                row[k] = sparc[i][j];
                k++;
            }
            else if(i==1){
                column[l] = sparc[i][j];
                l++;
            }
            else{
                value[m] = sparc[i][j];
                m++;
            }
        }
    }
        for (u=0;u<elem;u++){
            if(maxR<row[u]){
                maxR=row[u];
            }
            if(maxC<column[u]){
                maxC=column[u];
            }
        }
        maxR= maxR+1;
        maxC = maxC+1;
        printf("%dX%d",maxR,maxC);
        char newm[maxR][maxC];
        for(i=0;i<maxR;i++){
            for(j=0;j<maxC;j++){
                    newm[i][j] = 0;
            }
        }
        for(u=0;u<elem;u++){
            newm[row[u]][column[u]] = value[u];
        }
    printf("\nSPARC MATRIX\n");
     for(i=0;i<maxR;i++){
        for(j=0;j<maxC;j++){
            printf("\t%d",newm[i][j]);
        }
        printf("\n");
    }
/*0       1       2       3
4       5       0       7
0       9       0       0
0       0       0       0*/
}
