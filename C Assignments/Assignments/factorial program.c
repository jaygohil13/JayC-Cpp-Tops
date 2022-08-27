#include<stdio.h>

void main()
{
	int i,number,fact=1;
	
	printf("enter a number:");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is:%d",number,fact);
	
}       