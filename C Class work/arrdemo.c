#include <stdio.h>

void main()
{
	int arr1[5],arr2[5],arr3[5]; 
	int i;
	
	printf("-----Array 1 Elements-----\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Elements [%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n-----Array 2 Elements-----\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Elements[%d] : ",i);
		scanf("%d",&arr2[i]);
	}
	
	printf("\n-----Addition of Array 1 and Array 2----- \n");	
	for(i=0;i<5;i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		printf("Sum[%d] = %d\n",i,arr3[i]);
	}
		
}