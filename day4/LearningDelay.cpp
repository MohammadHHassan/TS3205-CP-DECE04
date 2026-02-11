// day4
// LearningDelay

#include <stdio.h>			// Library for printf/scanf
#include <windows.h>		// Library for delay

int main(void)
{
	int a=1;
	
	while(a<=10)
	{
		printf("%d. Haji Mohammad bin Haji Hassan\n", a);
		a++;
		Sleep(500);		// 500ms = 0.5 sec
	}
	
	return 0;
}
