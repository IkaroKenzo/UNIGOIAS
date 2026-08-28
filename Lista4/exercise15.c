#include <stdio.h>

int main() {
    int num1, num2;
    int i;
    int prime1 = 1, prime2 = 1;

    printf("Enter the first positive integer: ");
    scanf("%i", &num1);

    printf("Enter the second positive integer: ");
    scanf("%i", &num2);

    if (num1 < 2) {
        prime1 = 0;
    }

    if (num2 < 2) {
        prime2 = 0;
    }

    for (i = 2; i < num1; i++) {
        if (num1 % i == 0) {
            prime1 = 0;
            break;
        }
    }

    for (i = 2; i < num2; i++) {
        if (num2 % i == 0) {
            prime2 = 0;
            break;
        }
    }

    if (prime1 && prime2) {
        printf("Both numbers are prime.\n");
    } else if (prime1 && !prime2) {
        printf("The first number is prime, but the second is not.\n");
    } else if (!prime1 && prime2) {
        printf("The first number is not prime, but the second is prime.\n");
    } else {
        printf("Neither number is prime.\n");
    }

    return 0;
}