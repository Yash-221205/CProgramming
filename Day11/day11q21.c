//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int month;
    printf("enter the number between 1 to 12 \n");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("january 31 days \n");
        break;
    case 2:
        printf("february 28 days \n");
        break;
    case 3:
        printf("march 31 days \n");
        break;
    case 4:
        printf("april 30 days \n");
        break;
    case 5:
        printf("may 31 days \n");
        break;
    case 6:
        printf("june 30 days \n");
        break;
    case 7:
        printf("july 31 days \n");
        break;
    case 8:
        printf("august 30 days \n");
        break;
    case 9:
        printf("september 31 days \n");
        break;
    case 10:
        printf("october 30 days \n");
        break;
    case 11:
        printf("november 31 days \n");
        break;
    case 12:
        printf("decmber 30 days");
        break;
    default:
        printf("enter valid number");
        break;
    }
    return 0;
}