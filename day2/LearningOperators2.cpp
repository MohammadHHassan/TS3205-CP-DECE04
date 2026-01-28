// day2
// LearningOperators2

#include <stdio.h>

int main(void)
{
	// Mixing double and int
	printf("9.0/5 = %g\n", (9.0/5));
	printf("9/5.0 = %g\n", (9/5.0));
	printf("9/5*10.0 = %g\n", (9/5*10.0));
	printf("10.0*9/5 = %g\n", (10.0*9/5));
	
	// Casts
	printf("(int)3.9 = %d\n", (int)3.9);
	printf("(double)9/5 = %g\n", (double)9/5);
	printf("(double)(9/5) = %g\n", (double)(9/5));
	printf("f is ASCII character %d\n", (int)'f');
	printf("71 is ASCII character %c", (char)71);
	
	return 0;
}
