//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, min, hcf = 1;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    min = (num1 < num2) ? num1 : num2;
    for (int i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i; 
        }
    }

    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
