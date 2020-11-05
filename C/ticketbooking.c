#include <stdio.h>
#include <conio.h>
struct Ticket {
    char name[20];
    int ticket_num;
    int ticket_price;
};
void main(){
        int n,i;
    printf("Total Number of Ticket Entered: ");
    scanf("%d",&n);
    struct Ticket tic[n];
    for(i=0;i<n;i++){
        printf("Enter The Name of %d Passenger :",i+1);
        scanf("%s",&tic[i].name);
        printf("Enter The Ticket Number of %d Passenger :",i+1);
        scanf("%d",&tic[i].ticket_num);
         printf("Enter The Ticket Number of %d Pessenger :",i+1);
        scanf("%d",&tic[i].ticket_price);
    }
    printf("\nRECORD\n");
    printf("\n\nName\tNumber\tPrice");
    printf("\n");
    for(i=0;i<n;i++){
        printf("\n%s\t%d\t%d",tic[i].name,tic[i].ticket_num,tic[i].ticket_price);
    }

}
