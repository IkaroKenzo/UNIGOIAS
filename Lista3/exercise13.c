#include <stdio.h>

int main(){
	
	int a, b, c;
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	if(a > b && a > c){
		printf("%i are greater than %i and %i",a,b,c);
	}
	else if(b > a && b > c){
		printf("%i are greater than %i and %i",b,a,c);
	}
	else if(c > a && c > b){
		printf("%i are greater than %i and %i",c,a,b);
	}
	else{
		printf("are equals");
	}
	return 0;
}