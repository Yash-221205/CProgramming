//Write a program to print all factors of a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    printf("the factors of %d are\n",n);
    int i=1;
    while (i<=n)
    {
    
        if (n%i==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    
}