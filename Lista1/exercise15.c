#include <stdio.h>

int main() {

    float x, y, swapped;

    printf("Enter two numbers X and Y: \n");
    scanf("%f", &x);
    scanf("%f", &y);

    if (x != y) {

        swapped = x;
        x = y;
        y = swapped;

        printf("The numbers swapped: X = %.2f, Y = %.2f \n", x, y);      
    }
     else {

        printf("The numbers are equal\n");
    
    return 0;
}
    }