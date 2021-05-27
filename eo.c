#include<stdio.h>
 
int main()
{
  int n, even_sum=0, odd_sum=0, i;
  printf("Enter number: ");
  scanf("%d", &n);
  
  for(i = 1; i<=n; i++)
  {
  	if(i%2==0) 
  	{
        even_sum=even_sum+i;
  	}
  	else
  	{
  		odd_sum=odd_sum+i;
	}
  }
  printf("Sum of Even Numbers %d  = %d", n, even_sum);
  printf("\n Sum of Odd Numbers %d  = %d", n, odd_sum);

  return 0;
}