#include <stdio.h>

int main(void) {
    int a;
    int b;

    scanf("%d%d", &a, &b);
    
    if (a * a > b * b) {
        printf("%d\n", a);
    } else if (a * a == b * b) {
        printf("Numbers' squares are equal: %d %d\n", a, b);
    } else {
        printf("%d\n", b);
    }
}