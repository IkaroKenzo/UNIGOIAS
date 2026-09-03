#include <stdio.h>
//Implemente um algoritmo para gerar o número H. O número N é lido do teclado.
int main() {
    int n;
    float h = 0.0;

    printf("Enter N: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        h = h + 1.0 / i;
    }

    printf("H = %.2f\n", h);

    return 0;
}
