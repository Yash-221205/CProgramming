//write a program to check if a number is a perfect number.
#include <stdio.h>
int main()
{
    int n,i,sum;
    i=1;
    printf("enter number n\n");
    scanf("%d",&n);
    sum=0;
    while (i<n)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if (sum==n)
    {
        printf("the number is perfect number");
    }
    else
    {
        printf("the number is not a perfect number");
    }
}