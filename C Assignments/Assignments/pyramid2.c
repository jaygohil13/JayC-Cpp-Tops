#include<stdio.h>

void main()
{
	int i,j,k,rows;
	printf("enter a number to define the rows:");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=i;k<=rows;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}