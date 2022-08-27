#include<stdio.h>

void main()
{
	int m1[2][3], m2[2][3];
	
	int i,j;
	printf("\nMatrix 1\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("\nMatrix 2\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	
	printf("\n\n----Addition of Matrix1 and Matrix 2 ---------\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]+m2[i][j]);
		}
		printf("\n");
		
	}
}