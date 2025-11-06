//Count positive, negative, and zero elements in an array.
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
    int count=0,count1=0,count2=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
        else if (arr[i]<0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
            
    }
    printf("positive numbers - %d\nnegative numbers - %d\nzero - %d",count,count1,count2);
    
}