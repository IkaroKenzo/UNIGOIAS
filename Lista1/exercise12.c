#include <stdio.h>

int main(){

    int perimeter, b, h;
    printf("Enter the base of the rectangle: \n");
    scanf("%i", &b);
    printf("Enter the height of the rectangle: \n");
    scanf("%i", &h);
    perimeter = 2 * (b + h);
    printf("The perimeter of the rectangle is: %icm\n", perimeter);

    return 0;
}


