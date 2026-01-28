// day2
// LearningPower

#include <stdio.h>			// Library for printf/scanf
#include <math.h>			// Library for mathematical functions

int main(void)
{
	double a=5.0, b=4.0, c;
	
	c = pow(a,b);
	
	printf("%g to the power of %g = %g\n", a, b, c);
	
	printf("2 to the power of 5 = %g", pow(2,5));
	
	return 0;
}
