#include<stdio.h>

void main()
{
	int First,Second,*p,*q,sum;
	
	printf("Enter Two Integers to Addition : \n");
	scanf("%d%d",&First,&Second);
	
	p = &First;
	q = &Second;
	
	sum = *p + *q;
	
	printf("\nSum of the two numbers = %d\n",sum); 
}