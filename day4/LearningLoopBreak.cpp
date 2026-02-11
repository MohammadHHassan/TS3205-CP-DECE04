// day4
// LearningLoopBreak

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char input;
	
	while(true)			// Forever loop
	{
		printf("Menu:\n");
		printf("1. Press 'e' to exit.\n");
		printf("2. Press any other key to loop.\n\n");
		
		printf("Your input: ");
		scanf(" %c", &input);
		
		if(input=='e')
		{
			printf("Exiting...\n");
			break;		// Exit from the loop
		}
		
		system("cls");
	}
	
	printf("Thank you");
	
	return 0;
}
