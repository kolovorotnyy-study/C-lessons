#include <stdio.h>

int main(void) {
    // *; /; +; -; %

    int a = 13;
    int b = 5;

    int c = a / b;
    int d = a % b;

    printf("c value is %d\n", c);
    printf("d value is %d\n", d);

    double x = 13.;
    double y = 5.0;

    double z = x / y;

    printf("z value is %.1f\n", z);

    double f = (double)b / a;

    printf("f value is %f\n", f);
}