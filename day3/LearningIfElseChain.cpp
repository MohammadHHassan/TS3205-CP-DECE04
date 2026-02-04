// day3
// LearningIfElseChain

#include <stdio.h>

int main(void)
{
	char status;
	
	printf("Please enter your marital status (M, S, D, W): ");
	scanf(" %c", &status);
	
	if(status=='M' || status=='m')		// If the user entered the letter M or m
	{
		printf("Married.");
	}
	else if(status=='S' || status=='s')
	{
		printf("Single.");
	}
	else if(status=='D' || status=='d')
	{
		printf("Divorced.");
	}
	else if(status=='W' || status=='w')
	{
		printf("Widowed.");
	}
	else
	{
		printf("Invalid character. You are only allowed to enter M, S, D or W.");
	}
	
	printf("\nThank you!");
	
	return 0;
}
