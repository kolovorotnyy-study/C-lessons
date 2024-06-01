#include <stdio.h>

// 3 4 -> 12 0 7 -1
// 3 0 -> 0 n/a 3 3

int main(void) {
    int a;
    int b;

    int success_read_count = scanf("%d %d", &a, &b);

    if (success_read_count == 2) {
        printf("Input is valid\n");
        printf("a value: %d\n", a);
        printf("b value: %d\n", b);
    } else {
        printf("Invalid input\n");
    }
}