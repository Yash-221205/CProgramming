//Merge two arrays.
#include <stdio.h>
int main()
{
    int n,s;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the size of second array:");
    scanf("%d",&s);
    int arr2[s];
    printf("enter elements\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int merged[n+s];
    for (int i = 0; i < n; i++)
    {
        merged[i]=arr[i];
    }
    for (int i = 0; i < s; i++)
    {
        merged[n+i]=arr2[i];
    }
    printf("merged array\n");
    for (int i = 0; i < n+s; i++)
    {
        printf("%d\n",merged[i]);
    }
}