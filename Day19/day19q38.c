//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int num=0;
    int digit=0;
    while (n!=0)
    {
        digit=n%10;
        num=(num+digit);
        n=n/10;
    }
    printf("sum of digits is %d\n",num);
    return 0;

}