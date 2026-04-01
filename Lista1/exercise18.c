#include <stdio.h>

int main() {

    double snacks, drinks, foods, tip, total;

    printf("snacks: \n");
    scanf("%lf", &snacks);
    printf("foods: \n");
    scanf("%lf", &foods);
    printf("drinks: \n");
    scanf("%lf", &drinks);

    tip = (snacks + foods + drinks) * 0.1;
    total = snacks + foods + drinks + tip;

    printf("tip: %.1lf\n", tip);
    printf("total: %.1lf\n", total);

    return 0;
}