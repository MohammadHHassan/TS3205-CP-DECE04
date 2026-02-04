// day3
// LearningNestedIf

#include <stdio.h>

int main(void)
{
	int age;
	
	printf("Please enter your age: ");
	scanf(" %d", &age);
	
	if(age>=0)					// If age entered is positive number
	{
		printf("Age entered is valid.\n");
		
		if(age<12)				// If age is less than 12
		{
			printf("Children.");
		}
		else if(age>=12 && age<18)		// If age is greater or equal to 12 and less than 18
		{
			printf("Teenager.");
		}
		else if(age>=18 && age<60)		// If age is greater or equal to 18 and less than 60
		{
			printf("Adult.\n");
			
			if(age<=30)
			{
				printf("Young adult.");
			}
			else
			{
				printf("Mature adult.");
			}
		}
		else							// Else, if age is greater or equal to 60
		{
			printf("Senior.");
		}
	}
	else						// Else, if age entered is negative number
	{
		printf("Age entered is invalid.");
	}
	
	return 0;
}
