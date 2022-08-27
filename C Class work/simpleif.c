#include <stdio.h>

void main()
{
	int a;
	printf("\nEnter No.");
	scanf("%d",&a);
	
	if(a%2 == 0)
	{
		printf("%d is Even",a);
	}
	else
	{
		printf("%d is Odd",a);
	}
}

