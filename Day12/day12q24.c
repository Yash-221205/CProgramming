/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/
#include <stdio.h>
int main()
{
    int units;
    printf("enter number of units \n");
    scanf("%d",&units);
    if (units<=100 && units>=1)
    {
        int bill = units*5;
        printf("electricity bill is rs.%d \n",bill);
    }
    else if (units<=200 && units>=101)
    {
        int bill1 = (units-100)*7+500;
        printf("electricity bill is rs.%d \n",bill1);
    }
    else if (units<=300 && units>=201)
    {
        int bill2 = (units-200)*10+700+500;
        printf("electricity billl is rs.%d \n",bill2);
    }
    else
    {
        int bill3 = (units-300)*12+1000+700+500;
        printf("electricity bill is rs%d \n",bill3);
    }
    return 0;
    
    
}