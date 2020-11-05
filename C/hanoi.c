//*Today's Code*
#include <stdio.h>
hanoi(int n, char source,char dest, char aux);
void main(){
    int ring;
    printf("\n Enter The Number Of rings : ");
    scanf("%d",&ring);
    hanoi(ring,'A','B','C');
}
hanoi(int n, char source,char dest, char aux){
    if(n==1){
        printf("\n Move the Disk 1 From %c to %c",source,dest);
    }
    else{
        hanoi(n-1,source,aux,dest);
        printf("\n Move the disk %d from %c to %c",n,source,dest);
        hanoi(n-1,aux,dest,source);
    }
}
