#include <stdio.h>
struct Address{
    int local_street;
     char society[40];
    char city[20];
    char country[20];
};
 struct StudentData{
    char student_name[20];
    int student_id;
    int student_age;
   struct Address ad;
};
void main(){
    int i,j;
    int num=0;
    printf("Enter The Number of Student to be Entered: ");
    scanf("%d",&num);
    struct StudentData stu[num];
    for(i=0;i<num;i++){
        printf("Enter the name of student : ");
        scanf("%s",stu[i].student_name);
        printf("Enter the Id of student : ");
        scanf("%d",&stu[i].student_id);
        printf("Enter the Age of student : ");
        scanf("%d",&stu[i].student_age);
        printf("Enter the House Number of student : ");
        scanf("%d",&stu[i].ad.local_street);
         printf("Enter the Society Name of student : ");
        scanf("%s",&stu[i].ad.society);
        printf("Enter the City Name of student : ");
        scanf("%s",&stu[i].ad.city);
        printf("Enter the Country Name of student : ");
        scanf("%s",&stu[i].ad.country);
    }
    printf("\nRECORD\n");
    printf("\n\nName\tId\tAge\tAddress");
    printf("\n");
    for(i=0;i<num;i++){
        printf("\n%s\t%d\t%d\t%d-%s, %s, %s",stu[i].student_name,stu[i].student_id,stu[i].student_age,stu[i].ad.local_street,stu[i].ad.society,stu[i].ad.city,stu[i].ad.country);
    }
}
