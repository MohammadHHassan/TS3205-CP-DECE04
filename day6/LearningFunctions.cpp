// day6
// LearningFunctions

#include <stdio.h>

void printSomething();		// Declaration of printSomething function

int main(void)				// main function
{
	int i;
	
	for(i=0 ; i<10 ; i++)
	{
		printSomething();		// Calling the function
	}
	
	return 0;				// End of main function
}

void printSomething()		// No semicolon, use curly bracket
{
	printf("Name: Haji Mohammad bin Haji Hassan\n");
	printf("Institution: Politeknik Brunei\n");
	printf("Programme: Diploma in Electronic and Communication Engineering\n");
}
