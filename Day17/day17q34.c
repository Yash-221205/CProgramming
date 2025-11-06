//Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int i=2;
    int num=0;
    while (i<n-1)
    {
        num=(num+n%i);
        if (num==0)
        {
            break;
        }
        i++;
    }
    if (num)
    {
         printf("Number is prime\n");
    }
    else
        printf("Number is not prime\n");
    
    return 0;
}