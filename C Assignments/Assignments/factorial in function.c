#include<stdio.h>

void factorial()
{
	int i,n,fact = 1;
	printf("Enter Factorial Number Is:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
		fact = fact * i; 
	}
	printf("\nfact of nunber is: %d",fact);
}

void main()
     
     {
     	factorial();
	 }