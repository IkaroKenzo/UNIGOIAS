#include <stdio.h>

int main(){
	
	int x;
	scanf("%i", &x);
	
	if(x % 5 == 0 && x % 10 == 0 && x % 2 == 0){
		printf("The number is divisible by 5, 10 and 2\n");
}
	else if(x % 5 == 0 && x % 10 != 0 && x % 2 == 0){
		printf("The number is divisible by 5 and 2 but not 10\n");
}
	else if(x % 5 == 0 && x % 10 != 0 && x % 2 != 0){
		printf("The number is divisible by 5 but not 10 or 2\n");
}
	else if(x % 5 != 0 && x % 10 == 0 && x % 2 != 0){
		printf("The number is divisible by 10 but not 5 or 2\n");
}
	else if(x % 5 != 0 && x % 10 == 0 && x % 2 == 0){
		printf("The number is divisible by 10 and 2 but not 5\n");
}
	else if(x % 5 == 0 && x % 10 == 0 && x % 2 != 0){
		printf("The number is divisible by 10 and 5 but not 2\n");
}
	else if(x % 5 != 0 && x % 10 != 0 && x % 2 == 0){
		printf("The number is divisible by 2 but not 5 or 10\n");
}	
	else if(x % 5 != 0 && x % 10 == 0 && x % 2 == 0){
		printf("The number is divisible by 2 and 10 but not 5\n");
}	
	else if(x % 5 == 0 && x % 10 != 0 && x % 2 == 0){
		printf("The number is divisible by 2 and 5 but not 10\n");
}
	else{
		printf("The number is not divisible by 5, 10 or 2\n");
}
	return 0;
}