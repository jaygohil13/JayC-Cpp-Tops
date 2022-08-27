#include<stdio.h>

void main()
{
	int arr[10],i,max;
	
	for(i=0;i<10;i++)
	{
		printf("\nEnter number %d :", i + 1);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<10;i++)
	{
		if (arr[0] < arr[i])
		{
			arr[0] = arr[i];
		}
	}
	printf(" \nmax number = %d",arr[0]);
}