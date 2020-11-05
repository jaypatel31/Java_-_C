#include<stdio.h>
#define CONSTANT 10
void transver(int a[],int n){
    int i;
    printf("Array %d: ",n);
    for(i=0;i<n;i++){
        printf("%d, ",a[i]);
    }
}
int search(int a[],int n,int key){
    int j;
    for(j=0;j<n;j++){
       if(a[j] == key){
            return j;
       }
    }
    return -1;
}
int insert(int a[],int n,int nvalue,int nkey){
    int i;
    if(nkey<=n && n<CONSTANT){//a[] = 1,2,3,4,5; 2pos = 55;
        for(i=n;i>=nkey-1;i--){
            a[i+1]=a[i];//a[6] = a[5] a[3] =a[2]
        }//a[] = 1,2,2,3,4,5
        a[nkey-1] = nvalue;//a[1] = 55
        return (n+1);
    }
    return n;
}
void update(int a[],int n,int uvalue,int ukey){
    int i;
    if(ukey<=n){// (40) 2pos= 50
        a[ukey-1]=uvalue;//a[1] =  50;
    }
}
int deleted(int a[],int n,int dkey){
    int i;
    if(dkey<=n){//a[] = 10,20,30,40,50,60; n= 6
        for(i=dkey-1;i<n;i++){//i =20-1 = 1
            a[i]=a[i+1];//a[2] = a[3]
        }//a[] = 10,30,40,50,60,60
        return (n-1);//n = 5;
    }
    return n;
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
    //SEARCH
    printf("\nEnter The Value To Search :");
    scanf("%d",&key);
    index = search(a,n,key);
    if(index != -1){
         printf("Value Found At Position : %d",index+1);
    }
    else{
        printf("Value Not Found");
    }
    printf("\nEnter The Value TO Be Inserted :");
    scanf("%d",&nvalue);
    printf("\nEnter THe Position To be Inserted :");
    scanf("%d",&nkey);
    n=insert(a,n,nvalue,nkey);
    transver(a,n);
    printf("\nEnter The Value to be Updated :");//555
    scanf("%d",&uvalue);
    printf("\nEnter The Position to be Updated :");//1
    scanf("%d",&ukey);
    update(a,n,uvalue,ukey);
    transver(a,n);
    printf("\nEnter the Position to be deleted :");
    scanf("%d",&dkey);
    n = deleted(a,n,dkey);
    transver(a,n);
}
