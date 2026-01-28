// day2
// LearningSquareRoot

#include <stdio.h>
#include <math.h>

int main(void)
{
	const double pi=3.14159254;		// Declare constant variable pi
	double A, r=5.0, h=8.0;
	
	printf("Given r=%.1f and h=%.1f\n", r, h);
	
	A = pi*r*(r+sqrt(pow(h,2)+pow(r,2)));
	
	printf("Surface area of the cone = %.2f", A);
	
	return 0;
}
