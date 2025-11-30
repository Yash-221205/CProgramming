//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name), i = 0;
    printf("Initials: ");
    while (i < len) {
        while (i < len && name[i] == ' ')
            i++;
        if (i >= len) break;
        int start = i;
        while (i < len && name[i] != ' ')
            i++;
        if (i < len)
            printf("%c. ", name[start]);
        else
            printf("%s", &name[start]);
    }
    printf("\n");
    return 0;
}
