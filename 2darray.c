#include<stdio.h>

int main()
{
int a[3][2],b[3][2],c[3][2],i,j,d[3][2];
int max,maxb,mina,minb;
float avg;
printf("Enter element of array a:\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the element of array b=\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("sum of matrix is=\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
max=a[0][0];
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
if(max<a[i][j])
{
max=a[i][j];
}
}
}
printf("maximum element of array a=%d",max);
maxb=b[0][0];
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
if(maxb<b[i][j])
{
maxb=b[i][j];
}
}
}
printf("\nmaximum element of array b is=%d",maxb);
mina=a[0][0];
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
if(mina>a[i][j])
{
mina=a[i][j];
}
}
}
printf("\nminimum element of array a is=%d",mina);
minb=b[0][0];
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
if(minb>b[i][j])
{
minb=b[i][j];
}
}
}
printf("\nminimum element of array b is =%d",minb);
return 0;
}