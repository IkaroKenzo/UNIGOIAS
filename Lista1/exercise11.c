#include <stdio.h>

int main() {

    int dividend, divider, quotient, rest;
    scanf("%i %i", &dividend, &divider);

    quotient = dividend / divider;
    rest = dividend % divider;

    printf("Dividend: %i\n", dividend);
    printf("Divider: %i\n", divider);
    printf("Quotient: %i\n", quotient);
    printf("Rest: %i\n", rest);

    return 0;
}