#include <stdio.h>

int main() {

int number, inverted = 0, rest;

    scanf("%i", &number);

    while (number != 0) {
        rest = number % 10;
        inverted = inverted * 10 + rest;
        number = number / 10;
    }


printf("The number on the contrary is: %i\n", inverted);

    return 0;
}