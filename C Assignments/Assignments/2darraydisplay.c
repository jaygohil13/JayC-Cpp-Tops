#include<stdio.h>

void main()
{
	int matr1[3][3],matr2[3][3];
	
	int i,j;
	
	printf("\n=========start matrix 1=========\n");
	printf("\naccept matrix1 elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element[%d][%d]:",i,j);
			scanf("%d",&matr1[i][j]);
		}
	}
	printf("\ndisplay matrix 1 elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matr1[i][j]);
		}
		printf("\n");
	}
	printf("\n=========end matrix 1=========\n\n");
	
	
	printf("\n=========start martix 2========\n\n");
	
	printf("\naccept matrix2 elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter elements[%d][%d]:",i,j);
			scanf("%d",&matr2[i][j]);
		}
	}
	
	printf("\ndisplay matrix2 elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matr2[i][j]);
		}
		printf("\n");
	}
	printf("\n=========end matrix 2=========\n\n");
}