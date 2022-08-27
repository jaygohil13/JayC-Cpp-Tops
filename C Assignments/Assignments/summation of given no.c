#include<stdio.h>

void main()
{
	int number,remainder,sum=0;
	
	printf("enter any number:");
	scanf("%d",&number);
	
	while(number>0)
	{
		remainder=number%10;
		sum= sum + remainder;
		number=number/10;
	}
	printf("\nsum of the digits of given number=%d",sum);
}