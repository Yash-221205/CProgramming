/*Write a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*  */
#include <stdio.h>

int main() {
    int i, j;

    // Increasing part
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n\n"); // Print newline and a blank line
    }

    // Decreasing part
    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}
