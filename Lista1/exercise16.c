#include <stdio.h>

int main() {

    double minSalary = 1621.00;
    double salary, salarys;

    printf("Type your salary: \n");
    scanf ("%lf", &salary);

    salarys = salary / minSalary;

    printf("Your salary is equal to %.2lf minimum salarys \n", salarys);

    return 0;
}