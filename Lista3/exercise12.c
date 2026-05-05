#include <stdio.h>

int main(){
	
	double salary, percentage, provision;
	printf("Enter your salary\n");
	scanf("%lf", &salary);
	printf("Enter your provision\n");
	scanf("%lf", &provision);
	
	percentage = salary * 0.30;
	
	if(provision > percentage){
		printf("the loan cannot be granted\n");
	}
	else{
		printf("the loan can be granted\n");
	}
	return 0;
}