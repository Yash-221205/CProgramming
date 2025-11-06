//Count even and odd numbers in an array
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0,count1=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            count++;
        }
        else
        {
            count1++;
        }    
    }
    printf("even numbers - %d\nodd numbers - %d",count,count1);
    
}