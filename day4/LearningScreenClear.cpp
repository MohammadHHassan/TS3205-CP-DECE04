// day4
// LearningScreenClear

#include <stdio.h>			// Library for printf/scanf
#include <windows.h>		// Library for delay
#include <stdlib.h>			// Library for screen clear

int main(void)
{
	int i;
	
	for(i=10 ; i>=0 ; i--)
	{
		printf("This program will be terminated in %d second(s)\n", i);
		Sleep(1000);			// Delayed by 1 sec
		system("cls");			// Clear the screen
	}
	
	printf("Bye!");
	
	return 0;
}
