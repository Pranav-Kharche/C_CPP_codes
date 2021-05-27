#include<stdio.h>

int main()
{
    int n, y=0, r;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        r=n%10;
        y=y*10+r;
        n=n/10;
    }
    printf("Reverse number is: %d", y);
    return 0;
}