//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i = 1, count = 0, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    while (count < n) {
        sum += i;
        i += 2;
        count++;
    }

    printf("The sum of first %d odd numbers is %d\n", n, sum);
    return 0;
}
