// day2
// LearningScanf2

#include <stdio.h>

int main(void)
{
	double a, b, c;
	
	printf("Please enter the value of a: ");
	scanf(" %lf", &a);
	
	printf("Please enter the value of b: ");
	scanf(" %lf", &b);
	
	c = a+b;
	printf("\nc = a+b = %g", c);
	
	return 0;
}
