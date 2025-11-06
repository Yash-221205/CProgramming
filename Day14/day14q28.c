//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
  int n;
  printf("enter n\n");
  scanf("%d",&n);
  int i=2;
  int prd=1;
  while (i<=n)
  {
    prd=i*prd;
    i=i+2;
  }
  printf("product of first %d even numbers is %d",n,prd);
  return 0;
}
