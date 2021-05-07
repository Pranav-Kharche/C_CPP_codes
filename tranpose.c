#include<stdio.h> 
int main() 
{ 
 int a[3][2],b[2][3],i,j;  
 printf("enter value of matrix");  
 for(i=0;i<3;i++) 
 	{ 
 	 	for(j=0;j<2;j++) 
 	 	{ 
 	 	 	scanf("%d",&a[i][j]); 
 	 	} 
 	 	 
 	} 
 	printf("Matrix:\n");  	
	 for(i=0;i<3;i++) 
 	{ 
 	 	for(j=0;j<2;j++) 
 	 	{ 
 	 	 	printf("%d",a[i][j]); 
 	 
} 
	 	 	printf("\n"); 
} 
 	for(i=0;i<3;i++) 
 	{ 
 	 	for(j=0;j<2;j++)  	 	
		  b[j][i]=a[i][j]; 
 	} 
 	printf("transpose matrx\n");  	
	 for(i=0;i<2;i++) 
 	{ 
 	 	for(j=0;j<3;j++)  	 	
		  printf("%d",b[i][j]);  	 	
		  printf("\n"); 
 	 	 
 	} 
 	return 0; 
} 
