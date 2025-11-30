//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, index, element;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter index to insert (0 to %d): ", n);
    scanf("%d", &index);
    printf("Enter element to insert: ");
    scanf("%d", &element);
    if (index < 0 || index > n) {
        printf("Invalid index\n");
        return 0;
    }
    for (int i = n; i > index; i--)
        arr[i] = arr[i - 1];
    arr[index] = element;
    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
