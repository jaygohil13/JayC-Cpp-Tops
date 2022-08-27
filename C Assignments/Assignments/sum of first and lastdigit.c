#include<stdio.h>

void main()
{
	int number,firstdigit,count,lastdigit,sum=0;
	
	printf("enter any number:");
	scanf("%d",&number);
	
	count=log10(number);
	firstdigit=number/pow(10,count);
	
	lastdigit=number%10;
	sum=firstdigit+lastdigit;
	
	printf("\n the sum of first(%d) and last digit(%d) of:%d=%d",firstdigit,lastdigit,number,sum);
}