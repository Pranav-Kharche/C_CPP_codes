//11.	Accept a number with 2 digit from user and display it in words.
#include <stdio.h>
int main()
{
    int first_digit, second_digit;
    printf("Enter two digits: ");
    scanf("%1d%1d",&first_digit,&second_digit);

    switch(first_digit % 10)
    {
    case 1: printf("ten"); 
            break;
    case 2: printf("twenty"); 
            break;
    case 3: printf("thirty"); 
            break;
    case 4: printf("forty");
            break;
    case 5: printf("fifty"); 
            break;
    case 6: printf("sixty");
            break;
    case 7: printf("seventy");
            break;
    case 8: printf("eighty"); 
            break;
    case 9: printf("ninety");
            break;
    }
    switch(second_digit % 10) 
    {
    case 0: break;
    case 1: printf(" one");
            break;
    case 2: printf(" two");
            break;
    case 3: printf(" three");
            break;
    case 4: printf(" four");
            break;
    case 5: printf(" five");
            break;
    case 6: printf(" six"); 
            break;
    case 7: printf(" seven"); 
            break;
    case 8: printf(" eight");
            break;
    case 9: printf(" nine");
            break;
    }
    return 0;
}