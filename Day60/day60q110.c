#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int *dq = malloc(n * sizeof(int));
    int front = 0, back = 0;

    for(int i = 0; i < k; i++) {
        while(front < back && arr[dq[back - 1]] <= arr[i]) back--;
        dq[back++] = i;
    }

    for(int i = k; i < n; i++) {
        printf("%d ", arr[dq[front]]);
        while(front < back && dq[front] <= i - k) front++;
        while(front < back && arr[dq[back - 1]] <= arr[i]) back--;
        dq[back++] = i;
    }

    printf("%d", arr[dq[front]]);
    free(arr);
    free(dq);
    return 0;
}
