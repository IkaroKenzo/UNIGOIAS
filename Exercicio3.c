#include <stdio.h>

int main() {

    int X = 28;
    int Y = 43;

    scanf("%i", &X);
    scanf("%i", &Y);

    int product = X * Y;
    printf("The product of %i and %i is %i\n", X, Y, product);

    return 0;

}
