// day4
// LearningDoWhile

#include <stdio.h>			// Library for printf/scanf

int main(void)				// Main function. Program will run here
{
	double input;			// Declare variable input in double
	
	do						// Do the following program
	{
		printf("Please enter a negative number: ");		// Prompt the user to enter -ve number
		scanf(" %lf", &input);		// Store user's number in variable input
	}while(input>=0);		// Loop while user entered positive number
	
	printf("\nYour number is %g", input);		// Display the negative number
	printf("\nThank you!");			// Print out Thank you!
	
	return 0;				// End of main function
}
