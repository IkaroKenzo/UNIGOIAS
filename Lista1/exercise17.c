#include <stdio.h>

int main() {

    double balance, rate;
    printf("Enter your balance: \n");
    scanf("%lf", &balance);

    rate = balance * 0.01;
    printf("Your new balance with one percent rate is: %.2lf\n", rate);

    return 0;
}