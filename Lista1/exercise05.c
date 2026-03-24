#include <stdio.h>

int main() {

    int a, successor, predecessor;

    scanf("%i", &a);

    successor = a + 1;
    predecessor = a - 1;

    printf("The successor of %i is %i, and his predecessor is %i.\n", a, successor, predecessor);
    return 0;
}
