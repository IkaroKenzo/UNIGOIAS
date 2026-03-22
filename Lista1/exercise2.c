#include <stdio.h>

int main() {

    int x = 28;
    int y = 43;

    scanf("%i", &x);
    scanf("%i", &y);

    int product = x * y;
    printf("The product of %i and %i is %i\n", x, y, product);

    return 0;


}