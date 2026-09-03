#include <stdio.h>

// A série de RICCI difere da série de FIBONACCI porque os dois primeiros termos são
//fornecidos pelo usuário. Os demais termos são gerados da mesma forma que a série de
//FIBONACCI. Criar um algoritmo que imprima os N primeiros termos da série de
//RICCI e a soma dos termos impressos, sabendo-se que para existir esta série serão
//necessários pelo menos três termos.


int main() {
    int n, first, second, next, sum;

    printf("Enter the number of terms: ");
    scanf("%i", &n);

    if (n < 3) {
        printf("The series must have at least 3 terms.\n");
        return 0;
    }

    printf("Enter the first term: ");
    scanf("%i", &first);

    printf("Enter the second term: ");
    scanf("%i", &second);

    sum = first + second;

    printf("Ricci series: %i %i ", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%i ", next);

        sum = sum + next;

        first = second;
        second = next;
    }

    printf("\nSum: %i\n", sum);

    return 0;
}
