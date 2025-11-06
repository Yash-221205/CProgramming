//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("enter number of terms\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        sum=sum+(float)(i*2)/(4*i-1);
    }
    printf("sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to %d terms is %.2f",n,sum);
}