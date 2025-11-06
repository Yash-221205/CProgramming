//Find the digit that occurs the most times in an integer number
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}, digit, max = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    if (num < 0) num = -num;
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }
    printf("Digit occurring most times: %d\n", result);
    return 0;
}
