//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter sides \n");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b & b==c)
    {
        printf("triangle is equilateral \n");
    }
    else if (a==b || b==c || a==c)
    {
        printf("triangle is isoscles \n");
    }
    else
    {
        printf("tringle is scalene");
    }
    return 0;
    
}