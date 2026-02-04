/*	day3
	Exercise1
	
	Declare two variables called x and y in double
	Prompt a message for the user to enter a positive number
	Store the value inside x
	
	If the number is positive, calculate its square root
	Store the result inside y, and print out the result
	
	Lastly, print out "Thank you" regardless if the user 
	entered a positive number or not.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y;
	
	printf("Please enter a positive number: ");
	scanf(" %lf", &x);
	
	if(x>=0)				// If x is positive
	{
		y = sqrt(x);
		printf("Square root of %g is equal to %.2f\n", x, y);
	}
	else					// Else, x is negative
	{
		printf("A negative number has been entered.\n");
		printf("Changing sign...\n");
		x = -x;
		y = sqrt(x);
		printf("Square root of %g is equal to %.2f\n", x, y);
	}
	
	printf("Thank you!");
	
	return 0;
}
