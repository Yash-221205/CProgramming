//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int rem=0;
    int rev=0;
    while (n!=0)
    {
        rem=(n%2+rem*10);
        n=n/2;
     }
    while (rem != 0)
    {
        rev = rev * 10 + (rem % 10);
        rem = rem / 10;
    }
    printf("%d",rev);
    return 0;

}
