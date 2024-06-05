#include <stdio.h>

int main(void) {
    int a;
    double x;

    int* pointer = &a;

    scanf("%d", &a);

    printf("%d\n", pointer);
    
    printf("%d\n", *pointer);
}