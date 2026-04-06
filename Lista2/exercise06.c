#include <stdio.h>
#include <math.h>

int main() {
	
	double x1, x2, y1, y2, result, square;
	
	printf("Enter with four numbers in the plane:\n");
	scanf("%lf %lf %lf %lf", &x1, &y2, &x2, &y2);
	
	square = pow(x2 - x1, 2) + pow(y2 - y1, 2);
	result = sqrt(square);
	
	printf("the distance between these two points is: %.2lf\n", result);
	
	
	return 0;
}