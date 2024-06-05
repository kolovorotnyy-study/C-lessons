#include <stdio.h>
#include <math.h>

// return_type FunctionName(type1 a, type2 b, type3 c, ...) {
//     // your_code
// }

double FindDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

void SwapIntergers(int* a, int* b) {
    int tmp = *a;

    *a = *b;
    *b = tmp;
}

int ReadTwoIntegers(int* a, int* b) {
    return scanf("%d%d", a, b) == 2;
}

int ReadWithValueValidation(int* a, int* b, int max_value) {
    // && - and; || - or; ! - not
    return ReadTwoIntegers(a, b) && *a < max_value && *b < max_value;
}

int main() {
    // double x1;
    // double x2;
    // double y1;
    // double y2;

    // scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);

    // double distance = FindDistance(x1, x2, y1, y2);

    // printf("%lf\n", distance);
    // printf("%lf\n", FindDistance(x1, x2, y1, y2));
    // putchar('\n');

    int a = 1;
    int b = 2;

    SwapIntergers(&a, &b);

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    putchar('\n');

    if (ReadTwoIntegers(&a, &b) == 1) {
        printf("a: %d\n", a);
        printf("b: %d\n", b);
    } else {
        printf("Invalid Input\n");
    }

    if (ReadWithValueValidation(&a, &b, 100)) {
        printf("a: %d\n", a);
        printf("b: %d\n", b);
    } else {
        printf("Invalid Input\n");
    }
}