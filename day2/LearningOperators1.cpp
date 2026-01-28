// day2
// LearningOperators1

#include <stdio.h>

int main(void)
{
	// Integer arithmetic
	printf("9/5 = %d\n", (9/5));
	printf("9.0/5.0 = %g\n", (9.0/5.0));
	printf("9%%5 = %d\n", (9%5));			// Modulus (%) = Remainder
	
	// Bitwise operation
	printf("5&6 = %d\n", (5&6));			// & = AND
	printf("5|6 = %d\n", (5|6));			// | = OR
	printf("7<<1 = %d\n", (7<<1));			// Shift binary to the left once
	
	// Operator precedence
	printf("2+103/4%%7 = %d", (2+103/4%7));
	
	return 0;
}
