// day5
// Program2

/*	Prompt a message for user to enter a value 3 times
	Store the user's input in x (double)
	Sum all the values together
	Give 1 second delay for each prompt
	
	Count the number of large values entered (if x>100)
	Calculate the average of the 3 values
	Print out: Sum, Large Values & Average
*/

#include <stdio.h>			// Library for printf/scanf
#include <windows.h>		// Library for sleep

int main(void)
{
	int i, count=0;
	double x, sum=0, average;
	
	for(i=0 ; i<3 ; i++)
	{
		printf("Please enter a value: ");
		scanf(" %lf", &x);
		
		if(x>100)			// Counting the large values
		{
			count++;		// Increment count if x>100
		}
		
		sum = sum+x;
		
		Sleep(1000);		// Give 1000ms (1 sec) delay
	}
	
	average = sum/3;
	
	printf("\nSum = %.1f", sum);
	printf("\nLarge values count = %d", count);
	printf("\nAverage = %.1f", average);
	
	return 0;
}
