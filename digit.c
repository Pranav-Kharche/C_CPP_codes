#include <stdio.h>
int main()
{
    int d, a;
    int sum=0;
    printf("Enter digits: ");
    scanf("%d",&d);
    while(d>0)
    {
        a=d%10;
        sum=sum+a;
        d=d/10;
    }
    printf("Sum is= %d", sum);
    return 0;
}