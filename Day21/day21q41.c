//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n,first,last,digit,swapped;
    printf("enter number\n");
    scanf("%d",&n);
    last=n%10;
    digit=log10(n);
    first=n/pow(10,digit);
    int middle=n % (int)pow(10,digit);
    middle=middle/10;
    swapped=last*pow(10,digit)+middle*10+first;
    printf("%d",swapped);   
}