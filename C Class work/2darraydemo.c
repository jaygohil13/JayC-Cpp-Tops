#include<stdio.h>

void main()
{
	int matr1[3][3];
	
	int i,j;
	
	printf("\nAccept Array Elements : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matr1[i][j]);
		}
	}
	
	printf("\nDisplay Elements \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matr1[i][j]);
		}
		printf("\n");
	}
}