#include<stdio.h>

void main()
{
	int a,b;
	printf("\nenter number 1 and number 2:");
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d",a,b);
	printf("\naddition=%d",(a+b));
	printf("\nsubstraction=%d",(a-b));
	printf("\nmultiplication=%d",(a*b));
	printf("\ndivision=%.2f",(a/(float)b));
}