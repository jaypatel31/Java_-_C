#include <stdio.h>
#include <string.h>
void merge(char *var, char *b,int c)
{
    *var = ' ';
    var++;
    for(int i=0;i<c;i++){
        *var = *b;
        var++;
        b++;
    }
    *var = NULL;
}
int main()
{
    char fname[20],lname[20];
    printf("Enter the First Name:");
    gets(fname);
     printf("Enter the Last Name:");
    gets(lname);
    int len =strlen(fname);
    int len2 = strlen(lname);
    merge(&fname[len],&lname[0],len2);
    printf("\nFinal name: %s", fname);
    return 0;
}
