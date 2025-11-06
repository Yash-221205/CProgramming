/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
int main()
{
    int day;
    printf("enter number of days \n");
    scanf("%d",&day);
    if (day<=5 && day>=1)
    {
        printf("library fine is rs.%d \n",day*2);
    }
    else if (day<=20 && day>=6)
    {
        printf("library fine is rs.%d \n",day*4);
    }
    else if (day<=30 && day>=21)
    {
        printf("library fine is rs.%d \n",day*6);
    }
    else
    {
        printf("membership canceled \n");
    }
    return 0;
    
    
}
