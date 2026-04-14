#include <stdio.h>
#include <math.h>

int main() {

    double a = 5, b = 7, angle = 45;
    double rad, c;

    rad = angle * 3.14 / 180.0;

    c = sqrt(a*a + b*b - 2*a*b*cos(rad));

    printf("c = %.2f\n", c);

    return 0;
}
