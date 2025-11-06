//Find the maximum and minimum element in an array.
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
    int max=arr[0];
    int min=arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arr[j]>max)
        {
            max=arr[j];
        }
        if (arr[j]<min)
        {
            min=arr[j];
        }
    }
    printf("max = %d\nmin = %d",max,min);
}