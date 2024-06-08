#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // int* ar = malloc(n * sizeof(int));
    int* ar = calloc(n, sizeof(int));


    if (ar == NULL) {
        printf("memory allocation error\n");
    } else {
        for(int i = 0; i < n; ++i) {
            printf("%d ", ar[i]);
        }
        putchar('\n');
    }

    free(ar);

    /*
    int* ar = malloc(n * sizeof(int));

    // your code

    free(ar)
    */
}