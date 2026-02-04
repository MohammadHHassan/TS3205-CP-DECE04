// day3
// LearningIfElse

#include <stdio.h>

int main(void)
{
	int input, remainder;
	
	printf("Please enter an integer value: ");
	scanf(" %d", &input);
	
	remainder = input%2;		// Modulus
	
	if(remainder==0)			// If there is no remainder
	{
		printf("Your number is EVEN.");
	}
	else
	{
		printf("Your number is ODD.");
	}
	
	return 0;
}
