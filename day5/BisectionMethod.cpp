// day5
// BisectionMethod

#include <stdio.h>
#include <math.h>

int main(void)
{
	double xmin, xmid, xmax, fmin, fmid, p;
	int count=0;
	
	printf("This program finds the root of (x/5)-cos(x)=0 using Bisection Method.\n\n");
	
	printf("Please enter the value of xmin: ");
	scanf(" %lf", &xmin);
	
	printf("Please enter the value of xmax: ");
	scanf(" %lf", &xmax);
	
	do
	{
		count++;				// Counting the number of loop/iteration
		
		xmid = (xmin+xmax)/2.0;
		
		fmin = (xmin/5)-cos(xmin);
		fmid = (xmid/5)-cos(xmid);
		
		p = fmin*fmid;
		
		if(p<0)
		{
			xmax = xmid;		// The root lies in lower half
		}
		else if(p>0)
		{
			xmin = xmid;		// The root lies in upper half
		}
		else					// p==0
		{
			break;				// Exit from the loop, found the root
		}
		
	}while(xmax-xmin>1e-9);		// Repeat while the gap is >0.000000001 or >1e-9
	
	printf("\n\nRoot = %f", xmid);		// Display the root
	printf("\nNumber of iteration = %d", count);
	
	return 0;
}
