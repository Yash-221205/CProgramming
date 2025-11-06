//Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int n,digit;
    digit=0;
    printf("enter number n\n");
    scanf("%d",&n);
    int chk=n;
    int fact=0;
    while (n>0)
    {
        digit=n%10;
        int i=1;
        int f=1;
        while (i<=digit)
        {
            f=f*i;
            i++;
        }
        fact=fact+f;
        n=n/10;
    }
    if (chk==fact)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }
    
}




