//Read and print elements of a one-dimensional array.
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
    printf("following is the array\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n",arr[j]);
    }
    
}