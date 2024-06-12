#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}

void BubbleSort(int* ar, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (ar[j] > ar[j + 1]) {
                int tmp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = tmp;
            }

            PrintArray(ar, n);
        }
    }
}

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

    BubbleSort(arr, n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    putchar('\n');

    free(arr);
}