#include <stdio.h>
void add(int a[3][3],int b[3][3]){
   int i,j;
   int c[3][3];
   printf("\nA+B : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
void mul(int a[3][3],int b[3][3]){
  int i,j;
  int c[3][3];
  printf("\nA*B : ");
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            int m=0;
            for(int k=0;k<3;k++){
                m = m+a[i][k]*b[k][j];
            }
            c[i][j]=m;
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
void sub(int a[3][3],int b[3][3]){
   int i,j;
   int c[3][3];
   printf("\nA+B : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][j]-b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int i = 0,j=0;
    int a[3][3],b[3][3];
    int c[3][3];
    int d[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter The Value of a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter The Value of b[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nA : ");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nB : ");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }

    add(a,b);
    mul(a,b);
    sub(a,b);
    return 0;
}




