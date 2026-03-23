#include <stdio.h>

int main() {

    double a, b, c, d, arithmetic, weighted, mean;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    
    mean = (a + 1 + b + 2 + c + 3 + d + 4);
    arithmetic = mean / 4.0;

    a = a * 1;
    b = b * 2;
    c = c * 3;
    d = d * 4;
    
    weighted = (a + b + c + d) / 10;
   
    printf("Arithmetic mean: %.2lf\n", arithmetic);
    printf("Weighted mean: %2.lf\n", weighted);

    return 0;
}