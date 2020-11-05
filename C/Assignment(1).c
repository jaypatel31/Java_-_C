#include<stdio.h>
#define CONSTANT 10
void transver(int a[],int n){
    int i;
    printf("Array %d: ",n);
    for(i=0;i<n;i++){
        printf("%d, ",a[i]);
    }
}
void reverse(int a[],int n){
    int i;
    printf("Array %d: ",n);
    for(i=n-1;i>=0;i--){
        printf("%d, ",a[i]);
    }
}
int insert(int a[],int n,int nvalue,int nkey){
    int i;
    if(nkey<=n && n<CONSTANT){
        for(i=n;i>=nkey-1;i--){
            a[i+1]=a[i];
        }
        a[nkey-1] = nvalue;
        return (n+1);
    }
    return n;
}
int deleted(int a[],int n){
    int i;
        for(i=0;i<n;i++){
            a[i]=a[i+1];
        }
        return (n-1);
}
void main(){
    int a[CONSTANT];
    int i,j,n,index,key,nvalue,nkey,uvalue,ukey,dkey;
    for(i=0;i<5;i++){
        printf("Enter The Values of array :");
        scanf("%d",&a[i]);
    }
    n =i;
    transver(a,n);//Display an array;
    //Inserting value at desired posotion
    printf("\nEnter The Value TO Be Inserted :");
    scanf("%d",&nvalue);
    printf("\nEnter THe Position To be Inserted :");
    scanf("%d",&nkey);
    n=insert(a,n,nvalue,nkey);
    transver(a,n);
   //Deleting First Element
    printf("\nArray After Deleting :\n");
    n = deleted(a,n);
    transver(a,n);
    //Reversing  Array
    printf("\nReverse Array:\n");
    reverse(a,n);
}
