#include <stdio.h>

void main()
{
	int a=9,b=0;
	
	if(a && b)  // AND Operator
	{
		printf("Line 1 is True");
	}
	else 
	{
		printf("Line 2 is False");
	}
	// a=2;
	if(a||b) // or operator
	{
		printf("\nline 3 is true");
	}
	else
	{
		printf("\nline 4 is false");
	}
	if(!(a&&b))  // not operator
	{
		printf("\nline 5 is true");
	}
	else
	{
		printf("\nline 6 is false");
	}
}
