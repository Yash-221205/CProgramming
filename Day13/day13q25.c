//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    char c;
    printf("enter operation\n");
    scanf(" %c",&c);
    switch (c)
    {
    case '+' :
        printf("%d+%d is %d \n",a,b, a+b );
        break;
    case '-' :
        printf("%d-%d is %d \n",a,b, a-b);
        break;
    case '*' :
        printf("%d*%d is %d \n",a,b, a*b);
        break;
    case '/' :
        printf("%d/%d is %d \n",a,b,a/b);
        break;
    case '%' :
        printf("%d%%%d is %d \n",a,b,a%b);
        break;
    default:
        printf("wrong input");
        break;
    }
}
