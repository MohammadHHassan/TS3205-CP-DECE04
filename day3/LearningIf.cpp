// day3
// LearningIf

#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive number: ");		// Prompt user to enter +ve value
	scanf(" %d", &x);			// Store the number in variable x
	
	if(x<0)			// If the user entered a negative number
	{
		printf("A negative number has been entered.\n");
		printf("Changing sign...\n");
		x = -x;		// New x = -(old x)
	}
	
	printf("Number entered = %d. Thank you.", x);
	
	return 0;
}
