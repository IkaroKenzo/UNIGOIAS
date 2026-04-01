#include <stdio.h>

int main () {
	
	float rate, deposit, income, total;
	
	printf("Enter your deposit: \n");
	scanf("%f", &deposit);
	
	printf("Enter your interest: \n");
	scanf("%f", &rate);
	
	income = deposit * (rate / 100.0);
	total = income + deposit;
	
	if (rate < 0){
		
		printf("Invalid interest");
	}
	
	printf("Your income was: U$%.2f\n", income);
	printf("Balance: U$%.2f\n", total);

return 0;
}