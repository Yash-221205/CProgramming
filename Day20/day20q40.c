//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int n;
    printf("enter binary number: ");
    scanf("%d",&n);

    int original = n;
    int num=0, digit=0, count=0;

    while (n!=0) {
        digit=n%10;
        digit = (digit==1)?0:1;
        num = num*10 + digit;
        n=n/10;
        count++;
    }

    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    
    printf("1's complement: %0*d\n", count, rev);
    return 0;
}
