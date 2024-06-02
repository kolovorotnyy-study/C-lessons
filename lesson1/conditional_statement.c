#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    if (a % 2 == 0) { // >; <; <=; >=
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }
}
