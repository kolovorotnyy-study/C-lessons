#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = NULL;
    int n = 0;

    int a;

    while (scanf("%d", &a) == 1) {
        ++n;

        if (arr == NULL) {
            arr = malloc(sizeof(int));
        } else {
            arr = realloc(arr, n * sizeof(int));
        }

        arr[n - 1] = a;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    putchar('\n');

    free(arr);
}