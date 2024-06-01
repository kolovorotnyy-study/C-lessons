#include <stdio.h>

int main(void) {
    int age;
    double x;

    printf("Enter your age: ");

    scanf("%d", &age);

    printf("Enter x value:\n");
    scanf("%lf", &x);

    printf("Your age is %d\n", age);
    printf("X value is %f\n", x);
}
