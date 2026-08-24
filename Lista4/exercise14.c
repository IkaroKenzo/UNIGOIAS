#include <stdio.h>

int main() {
    int i, number, num;
    int evens[100], odds[100];
    int evenCount = 0, oddCount = 0;
	
	
    scanf("%i", &num);
    printf("loops: %i\n", num);

    for (i = 0; i < num; i++) {
        scanf("%i", &number);

        if (number % 2 == 0) {
            evens[evenCount] = number;
            evenCount++;
        } else {
            odds[oddCount] = number;
            oddCount++;
        }
    }

    printf("Odd's = ");
    for (i = 0; i < oddCount; i++) {
        printf("%i ", odds[i]);
    }

    printf("\nEven's = ");
    for (i = 0; i < evenCount; i++) {
        printf("%i ", evens[i]);
    }

    printf("\n");

    return 0;
}