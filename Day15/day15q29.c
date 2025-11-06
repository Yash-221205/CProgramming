//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
 int n;
 printf("enter the number whose factorial you want to claculate\n");
 scanf("%d",&n);
 int i=1;
 int prd=1;
 while (i<=n)
 {
    prd=prd*i;
    i++;
 }
 printf("factorial of %d is %d",n,prd);
 return 0;   
}