//Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int revnum=0;
    while (n!=0)
    {
        int digit = n%10;
        revnum=revnum*10+digit;
        n=n/10;
    }
    printf("reversed number is %d \n",revnum);
    return 0;

}