/*	day3
	Exercise2
	
	Declare a variable called marks in double
	Prompt the user to enter their marks
	If marks is in between 50-100 (inclusive), print out "Pass"
	Else, if marks>=0 and marks<50, print out "Fail"
	Else, "Invalid marks"
	
	Additionally if "Pass",
		If marks>=80, "Distinction"
		Else, if marks>=65 and marks<80, "Merit"
		Else, "Just pass"
*/

#include <stdio.h>

int main(void)
{
	double marks;
	
	printf("Please enter your marks: ");
	scanf(" %lf", &marks);
	
	if(marks>=50 && marks<=100)
	{
		printf("Pass\n");
		
		if(marks>=80)
		{
			printf("Distinction");
		}
		else if(marks>=65 && marks<80)
		{
			printf("Merit");
		}
		else			// Marks below 65
		{
			printf("Just pass");
		}
	}
	else if(marks>=0 && marks<50)
	{
		printf("Fail");
	}
	else			// Else, if marks below 0 and above 100
	{
		printf("Invalid marks");
	}
	
	return 0;
}

