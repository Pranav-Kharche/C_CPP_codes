#include <stdio.h>
int main()
{
	float basic, hra, da, ta, gross_salary;
  	
	printf("Enter the Basic Salary of an Employee  :  ");
  	scanf("%f", &basic);
  
  	if (basic <= 5000)
  	{
  		hra = basic * (25 / 100);
		da= basic * 0.1;   
        ta= basic *(20/100); 	
  	} 
  	else
  	{
	   	hra = basic * (30/ 100); 
	   	da = basic * (15/ 100);
        ta= basic *(25/100);
	}
	gross_salary =  basic + hra + da + ta;
	printf("\n Gross Salary of this Employee  =  %f", gross_salary); 
	
  	return 0;
}