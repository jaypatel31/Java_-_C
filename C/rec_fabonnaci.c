//*Psuedo code for Fibonacci series with recursion.*
#include <stdio.h>
//*******FIBONNACI FUNCTION*******
int fibonacci(int i) {
   if(i == 0) {
      return 0;
   }
   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}
//********MAIN FUNCTION*********
void  main() {
   int i,num;
   printf("Enter The Number Of Term : ");
   scanf("%d",&num);
   for (i = 0; i < num; i++) {
      printf("%d, ", fibonacci(i));
   }
}
