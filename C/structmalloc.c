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
    struct Animal *s;
    s = (struct Animal *)malloc(sizeof(struct Animal));
        printf("Enter The Name of %d Animal :",i+1);
        scanf("%s",s->stu_name);
        printf("Enter The Type of %d Animal :",i+1);
        scanf("%s",&s->type);
         printf("Enter The Food Eaten by %d Animal Per Day in g :",i+1);
        scanf("%d",&s->food_per_day);

    printf("\nRECORD\n");
    printf("\n\nName\tType\tFood/Day");
    printf("\n");

        printf("\n%s\t%s\t%d",s->stu_name,s->type,s->food_per_day);

}

