//Write a program to print numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    int i = 0;
    while (i<n)
    {
        printf("%d\n",i+1);
        i++;
    }
    return 0;
}