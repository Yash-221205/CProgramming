//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int num=1;
    int digit=0;
    int found=0;
    while (n!=0)
    {
        digit=n%10;
        if (digit==1||digit==3||digit==5||digit==7||digit==9)
        {
            num=(num*digit);
            found=1;
        }
        n=n/10;
    }
    if (found)
    {
       printf("product of odd digits is %d\n",num); 
    }
    else
    {
        printf("no odd digits present");
    }
    return 0;

}