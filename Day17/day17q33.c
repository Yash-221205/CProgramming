//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int num=0;
    int digit=0;
    int numb=n;
    while (n!=0)
    {
        digit=n%10;
        num=(num+digit*digit*digit);
        n=n/10;
    }
    if (numb==num)
    {
        printf("given number is armstrong number\n");
    }
    else
    {
        printf("given number is not armstrong number\n");
    }
    return 0;

}