#include<stdio.h>

void main()
{
	int n,Remainder,Reverse=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		Remainder = n%10;
		Reverse = Reverse * 10 + Remainder;
		n/=10;
	}
	printf("\nReverse Number:%d",Reverse);
}