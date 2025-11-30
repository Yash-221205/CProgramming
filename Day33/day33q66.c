//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, element, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to insert: ");
    scanf("%d", &element);
    pos = n;
    for (int i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = element;
    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
