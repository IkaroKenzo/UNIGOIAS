#include <stdio.h>

int main(){

    double C, F, K;
    printf("Type the Celsius temperature: \n");
    scanf("%lf", &C);

    F = (C * 1.8) + 32;
    K = C + 273.15;
    
    printf("The temperature in Fahrenheit is: %.2lf F\n", F);
    printf("The temperature in Kelvin is: %.2lf K\n", K);
    
    return 0;
}