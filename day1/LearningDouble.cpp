// day1
// LearningDouble

#include <stdio.h>

int main(void)
{
	double numberOne, numberTwo, numberThree;
	
	numberOne = 3.19;
	numberTwo = 2.55555;
	printf("numberOne = %.2f, numberTwo = %.2f", numberOne, numberTwo);
	
	numberThree = numberOne+numberTwo;
	printf("\nnumberThree = %.2f", numberThree);
	
	return 0;
}
