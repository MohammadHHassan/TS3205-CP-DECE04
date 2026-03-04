// day5
// Program1

#include <stdio.h>

int main(void)
{
	int i, userInput, sum=0;
	
	for(i=0 ; i<3 ; i++)
	{
		printf("Please enter a number: ");
		scanf(" %d", &userInput);
		
		sum = sum+userInput;
	}
	
	printf("\nSum of all values: %d", sum);
	
	return 0;
}
