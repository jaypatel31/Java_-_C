#include <stdio.h>
//*******fact FUNCTION*******
int fact(int i) {
   if(i == 0) {
      return 1;
   }
   if(i == 1) {
      return 1;
   }
   return i*fact(i-1);
}
//********MAIN FUNCTION*********
void  main() {
   int i,num;
   printf("Enter The Number To be Factorial : ");
   scanf("%d",&num);
      printf("%d", fact(num));
}
