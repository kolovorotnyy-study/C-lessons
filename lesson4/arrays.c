#include <stdio.h>

int FindMax(int* ar, int n) {
    int max_value = ar[0];

    for (int i = 0; i < n; ++i) {
        if (ar[i] > max_value) {
            max_value = ar[i];
        }
    }

    return max_value;
}

void TransformAbsoluteValues(int* ar, int n) {
    for (int i = 0; i < n; ++i) {
        if (ar[i] < 0) {
            ar[i] *= -1; // ar[i] = ar[i] * -1;
        }
    }
}

int main() {
    int size = 5;

    int ar[size];

    for (int i = 0; i < size; ++i) {
        // ar[0] ; ar[1]; ... ;ar[4]
        scanf("%d", &ar[i]);
    }

    TransformAbsoluteValues(ar, size);

    printf("%d\n", FindMax(ar, size));
}