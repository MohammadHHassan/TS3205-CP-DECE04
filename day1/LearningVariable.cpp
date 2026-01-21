// day1
// LearningVariable

#include <stdio.h>

int main(void)
{
	// Variable is a place where you store data
	// Types of variable: 	int (whole number), float/double (decimal numbers)
	//						char (letters/characters), boolean (true/false)
	
	int a, b, c;	// Declaring variables a, b and c as integers
	
	a=30;
	b=15;
	c=a+b;
	
	printf("a = %d, b = %d", a, b);		// %d = conversion specifier for int
	printf("\nc = a+b = %d", c);
	
	return 0;
}
