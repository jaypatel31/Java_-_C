#include <stdio.h>
#include <string.h>
void main(){
    char str1[20];
    char a[20];
    char b[20];
    char fc[1];
    printf("Enter String : ");
     gets(str1);
    reverse(str1);
    printf("\n\nEnter The Character To find it's Occurance :");
    gets(fc);
    occurence(str1,fc);
   printf("\nInput a string : ");
   gets(a);

   printf("\nInput a string : ");
   gets(b);

   if (compare_strings(a, b) == 0)
      printf("Equal strings.\n");
   else
      printf("Unequal strings.\n");
}
void reverse(char str1[]){
    int a;
    int b,i,c,e;
    char Rname[40];
    a =0;
    while(str1[a] != '\0'){
        a++;
    }
    b=0;
    for(i=a-1;i>=0;i--){
        Rname[b] = str1[i];
        b++;
    }
    Rname[b] = '\0';
    printf("\nReverse Name : %s",Rname);
    c=0;
    while(str1[c] != '\0'){
      if(str1[c] == Rname[c]){
            e++;
      }
      c++;
    }
    if(e==c){
        printf("\n\n PELINDROM");
    }
    else{
        printf("\n\n Not PELINDROM");
    }
}
void occurence(char str1[],char fc[]){
    int a,e;
    a=0;
    e =0;
    while(str1[a] != '\0'){
        if(str1[a] == fc[0]){
            e++;
        }
        a++;
    }
     printf("\n\nTotal Ocuurence of %c is %d",fc[0],e);
}
int length(char str[],char str1[]){
     int a,len;

}
int compare_strings(char a[], char b[])
{
   int c = 0;

   while (a[c] == b[c]) {
      if (a[c] == '\0' || b[c] == '\0')
         break;
      c++;
   }

   if (a[c] == '\0' && b[c] == '\0')
      return 0;
   else
      return -1;
}
