#include <stdio.h>
void main() 
{ 
   int a, num;
   int prime = 1;
   printf("Enter no.: ");
   scanf("%d",&num);
   for(a=2; a<num; a++) 
   {
      if((num%a) == 0) 
      {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("The number is prime", num);
   else
      printf("The number is not a prime", num);
}