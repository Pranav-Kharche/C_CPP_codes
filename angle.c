#include <stdio.h>

int main()
{
    int a1, a2, a3;
    int sum;
    printf("Enter angle1: ");
    scanf("%d", &a1);
    printf("Enter angle2: ");
    scanf("%d", &a2);
    printf("Enter angle3: ");
    scanf("%d", &a3);

    sum = a1 + a2 + a3; 
    if(sum == 180 && a1 > 0 && a2 > 0 && a3 > 0) 
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }

    return 0;
}