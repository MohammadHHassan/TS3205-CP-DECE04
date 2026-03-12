// day6
// Exercise1

/*	Declare a function called hypo with 2 parameter variables
	Parameter variables: double a, double b
	This function returns the hypotenuse value of a triangle
	where a is the height and b is the base
	
	In the main function, ask the user to enter the base and height value
	Call the hypo function and print it out in 2 decimal places
*/

#include <stdio.h>
#include <math.h>

double hypo(double a, double b);

int main(void)
{
	double base, height, c;
	
	printf("This program calculates the hypotenuse value of a triangle.\n\n");
	
	printf("Please enter the base value: ");
	scanf(" %lf", &base);
	printf("Please enter the height value: ");
	scanf(" %lf", &height);
	
	c = hypo(height,base);
	printf("\nHypotenuse = %.2f", c);
	
	return 0;
}

double hypo(double a, double b)
{
	return sqrt(pow(a,2)+pow(b,2));
}
