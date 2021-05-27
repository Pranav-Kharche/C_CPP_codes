#include<stdio.h>
int fact(int);
void main()                                             
{
    int n,temp,dummy,sum=0;
    printf("Enter no.: ");
    scanf("%d",&n);
    dummy=n;
    while(dummy!=0)
    {
        temp=dummy%10;
        int f=fact(temp);
        sum=sum+ f;
        dummy=dummy/10;
    }
    if(sum==n)
        printf("strong number");
    else
        printf("not strong number");
}
int fact(int temp)
{
     int a=1,i;  
    for(i=1; i<=temp; i++)  
    {  
        a=a *i;  
    }  
    return a;  
    
}
    
