#include <stdio.h>
void add(int** a,int** b,int r,int c){
   int i,j,z=0;
   int d[r][c];
   printf("\nA+B : ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            d[i][j] = a[i][j]+b[i][j];
            printf("\t%d",d[i][j]);
        }
        printf("\n");
    }
}
void mul(int** a,int** b,int r,int c){
  int i,j,m=0;
    int d[r][c];
  printf("\nA*B : ");
    for(i=0;i<r;i++){

        for(j=0;j<c;j++){
                d[i][j] = a[i][j]*  b[i][j];
            printf("\t%d",d[i][j]);
        }
        printf("\n");
    }
}
void sub(int** a,int** b,int r,int c){
  int i,j,m=0;
  int d[r][c];
  printf("\nA-B : ");
    for(i=0;i<r;i++){

        for(j=0;j<c;j++){
                d[i][j] = a[i][j]-b[i][j];
            printf("\t%d",d[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int i = 0,j=0,l;

    int d[3][3];
    int r;
    int c;
    int num=0;
    int count = 0;
      printf("In a[i][j] Enter The Value of i :");
         scanf("%d",&r);
      printf("In a[i][j] Enter The Value of j :");
         scanf("%d",&c);
    int **a = (int **)malloc(r * sizeof(int*));
    int **b = (int **)malloc(r * sizeof(int*));
    for(l=0;l<r;l++){
        a[l] = (int *)malloc(c * sizeof(int));
        b[l] = (int *)malloc(c * sizeof(int));
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          printf("Enter The Value of a[%d][%d] :",i,j);
         scanf("%d",&a[i][j]);
            //*(a + i*c + j) = num;
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter The Value of b[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
            //*(b + i*c + j) = num;
        }
    }
    printf("\nA : ");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%p",a[i][j]);
        }
        printf("\n");
    }

    printf("\nB : ");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }

    add(a,b,r,c);
    mul(a,b,r,c);
    sub(a,b,r,c);

}
