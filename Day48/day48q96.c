//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char *wordStart = str;
    char *temp = str;

    while (*temp) {
        if (*temp == ' ') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
        temp++;
    }
    reverseWord(wordStart, temp - 1);

    printf("Sentence with each word reversed:\n%s\n", str);
    return 0;
}