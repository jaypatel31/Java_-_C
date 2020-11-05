#include <stdio.h>
struct Animal{
    char stu_name[20];
    char type[20];
    int food_per_day;
};
void main(){
    int n,i;
    printf("Total Number of Animal: ");
    scanf("%d",&n);
    struct Animal stu[n];
    for(i=0;i<n;i++){
        printf("Enter The Name of %d Animal :",i+1);
        scanf("%s",&stu[i].stu_name);
        printf("Enter The Type of %d Animal :",i+1);
        scanf("%s",&stu[i].type);
         printf("Enter The Food Eaten by %d Animal Per Day in g :",i+1);
        scanf("%d",&stu[i].food_per_day);
    }
    printf("\nRECORD\n");
    printf("\n\nName\tType\tFood/Day");
    printf("\n");
    for(i=0;i<n;i++){
        printf("\n%s\t%s\t%d",stu[i].stu_name,stu[i].type,stu[i].food_per_day);
    }
}
