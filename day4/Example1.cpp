// day4
// Example1

/*	Modify the program below so that it counts the number of times
	user entered incorrect answer.
	Display the count once the user answered correctly.
	Hint: You need extra variable to count, and its initial number is 0.
*/

#include <stdio.h>

int main(void)
{
	int a=10, b=15, answer, count=0;
	
	printf("Given a = %d, b = %d\n\n", a, b);
	
	do
	{
		printf("What is a+b?\n");
		scanf(" %d", &answer);
		
		if(answer!=(a+b))			// If the answer is incorrect
		{
			count++;				// Increment count by 1
		}
	}while(answer!=(a+b));			// Loop while the answer is incorrect
	
	printf("Your answer is correct! Thank you");
	printf("\nNumber of incorrect answer: %d", count);
	
	return 0;
}
