// day6
// LearningIntFunctions

#include <stdio.h>

int campurSepuluh(int a);

int main(void)
{
	int x=50, y;
	
	printf("x = %d\n", x);
	
	y = campurSepuluh(x);
	printf("y = x+10 = %d\n", y);
	
	printf("2+10 = %d", campurSepuluh(2));
	
	return 0;
}

int campurSepuluh(int a)
{
	return a+10;
}
