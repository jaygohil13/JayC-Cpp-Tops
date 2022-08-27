#include<stdio.h>

void main()
{
	int m1[2][3],m2[2][3];
	
	int i,j;
	printf("matrix 1 :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\nmatrix 2 :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",& m2[i][j]);
		}
	}
	printf("\n\n----addition of matr1 and matr2----\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n----Division of matr1 and matr2----\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f\t",m1[i][j]/(float)m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n----multiplication of matr1 and matr2----\n\n");
	
	for(i=0;i<2;i++)
	
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]*m2[i][j]);
		}
		printf("\n");
	}
		printf("\n\n----subtraction of matr1 and matr2----\n\n");
	
	for(i=0;i<2;i++)
	
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]-m2[i][j]);
		}
		printf("\n");
	}
}