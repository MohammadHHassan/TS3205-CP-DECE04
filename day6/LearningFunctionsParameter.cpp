// day6
// LearningFunctionsParameter

#include <stdio.h>

double moneyConverter(double money);	// Declaration of moneyConverter function
										// Needs to return double value in it
										// 1 parameter variable: double money

int main(void)
{
	double duit, input;
	
	printf("Welcome to money converter.\n");
	printf("Today's rate:\n");
	printf("BND 1.00 = RM 3.05\n\n");
	
	printf("Please enter your money: BND ");
	scanf(" %lf", &input);
	
	duit = moneyConverter(input);		// Calling the function. Store the converted money in duit
	printf("\nYour BND %.2f has been converted to RM %.2f\n", input, duit);
	
	printf("\nBND 200.00 = RM %.2f", moneyConverter(200));
	printf("\nBND 300.00 = RM %.2f", moneyConverter(300));
	
	return 0;
}

double moneyConverter(double money)
{
	return money*3.05;			// Return the converted money back to the caller
}
