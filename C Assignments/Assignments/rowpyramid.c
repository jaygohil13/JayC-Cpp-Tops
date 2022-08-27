#include<stdio.h>

void main()
{
	int row,i,j,number=1;
	printf("enter the number of rows:");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",number);
			++number;
		}
		printf("\n");
	}
}