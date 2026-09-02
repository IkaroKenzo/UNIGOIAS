#include <stdio.h>

//A série de Fibonacci é formada pela sequência:
//• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
//Escreva um algoritmo que gere a série de FIBONACCI até o N-ésimo termo.

int main() {
    int n, first, second, next;

    first = 1;
    second = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}