#include <stdio.h>
#include <math.h>

// return_type FunctionName(type1 a, type2 b, type3 c, ...) {
//     // your_code
// }

double FindDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    double x1;
    double x2;
    double y1;
    double y2;

    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    double distance = FindDistance(x1, y1, x2, y2);

    printf("%lf\n", distance);
    printf("%lf\n", FindDistance(x1, y1, x1, y2));
}