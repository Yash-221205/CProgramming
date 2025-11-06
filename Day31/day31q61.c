//Search for an element in an array using linear search.
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
    printf("enter element to search\n");
    scanf("%d",&s);
    int found=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==s)
        {
            printf("found at index %d",i);
            found=1;
        }   
    } 
    if (found==0)
    {
        printf("no such element exists");
    }
    
}