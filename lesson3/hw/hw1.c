#include <stdio.h>

int main(void) {
    int a;
    int b;

    if (scanf("%d%d", &a, &b) != 2) {
        printf("n/a\n");
    } else {
        printf("%d ", a * b);

        if (b == 0) {
            printf("n/a ");
        } else {
            printf("%d ", a / b);
        }

        printf("%d ", a + b);
        printf("%d\n", a - b);
    }
}