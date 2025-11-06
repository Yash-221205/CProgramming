//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int num;
    num=n;
    int rev=0;
    while (n!=0)
    {
        rev=(rev*10+n%10);
        n=n/10;
    }
    if (rev==num)
    {
        printf("number is palindrome number");
    }
    else
    {
        printf("number is not palindrome nnumber");
    }
    return 0;
}