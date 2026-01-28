// day2
// LearningScanf

#include <stdio.h>			// Library for input/output

int main(void)				// Main function
{
	int age;				// Declare variable age in integer
	
	printf("Hi Mohammad :)\n");
	
	printf("How old are you?\n");		// Prompt message for user to enter their age
	scanf(" %d", &age);		// Store the user's input in variable age
	
	printf("You are %d years old", age);		// Print back the user's age
	
	return 0;
}
