#include<stdio.h> 
int main() 
{ 
 	int a[3][2],b[3][2],i,j,c[3][2]; 
	printf("Enter elements of matrix a");  	
	for(i=0;i<3;i++) 
 	{ 
 	 	for(j=0;j<2;j++) 
 	 	{ 
 	 	 	scanf("%d",&a[i][j]); 
 	 	} 
 	} 
 	printf("Enter element of matrx b");  	
	 for(i=0;i<3;i++) 
{
	 	for(j=0;j<2;j++) 
	 	{ 
 	 	 	scanf("%d",&b[i][j]); 
 	 	} 
 	} 
 	for(i=0;i<3;i++) 
 	{ 
 	 	for(j=0;j<2;j++) 
 	 	{ 
 	 	 	c[i][j]=a[i][j]*b[i][j]; 
 	 	} 
 	} 
 	printf("multiplication of matrix is=\n");  
	 for(i=0;i<3;i++) 
 	{ 
 	 	for(j=0;j<2;j++) 
 	      	    {  	     	printf("%d  ",c[i][j]); 
 	 	} 
 	 	printf("\n"); 
 	} 
 	return 0; 
} 
