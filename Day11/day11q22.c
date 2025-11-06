//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    int cp, sp;
    printf("enter cost price and selling price respectively \n");
    scanf("%d %d", &cp, &sp);
    if (sp-cp > 0)
    {
        float p = (((sp-cp)*100))/cp;
        printf("profit = %f%%", p);
    }
    else if (sp-cp < 0)
    {
        float l = ((cp-sp)*100)/cp;
        printf("loss = %f%%", l);
    }
    else
    {
        printf("neither loss nor profit");
    }
    return 0;
}