// day2
// Exercise1

/*	Copy and paste the codes from BruneiDollarToRM.c
	Modify this program so that it accepts user's input for
	the BND value. Print out the result.
*/

#include <stdio.h>

int main(void)
{
	double bnd, rm;
	
	printf("Please enter the value of BND: ");
	scanf(" %lf", &bnd);

	rm = bnd*3.1;
	
	printf("BND to RM Converter:\n");
	printf("BND %.2f = RM %.2f", bnd, rm);
	
	return 0;
}
