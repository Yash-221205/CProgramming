//Find the sum of array elements.
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
    int sum=0;
    for (int j = 0; j < n; j++)
    {
        sum=sum+arr[j];
    }
    printf("sum of array elements is %d",sum);
}