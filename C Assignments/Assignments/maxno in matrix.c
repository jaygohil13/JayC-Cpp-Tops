#include<stdio.h>

void main()
{
	int arr[5],a,max;
	for(a=0;a<5;a++)
	
	{
		printf("\nEnter Elements[%d] = ",a);
		scanf("%d",&arr[a]);
	}
	printf("\n\n");
	
	max=arr[0];
	for(a=0;a<5;a++)
	{
		if(arr[a]>max)
		{
			max=arr[a];
		}
	}
	printf("max matrix is : %d",max);
	
}