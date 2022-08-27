#include<stdio.h>

void main()
{
	int i;
	int arr1[5],arr2[5];
	
	 printf("accept array 1 elements : \n\n");
	for(i=0;i<5;i++)
	{
		printf(" array 1 element[%d] : ",i);
		scanf("\n%d",&arr1[i]);
	}
	{
		printf("accept array 2 elements : \n\n");
	for(i=0;i<5;i++)
	{
		printf(" array 2 element[%d] : ",i);
		scanf("\n%d",&arr2[i]);
	}
	}
	printf("\n\nsum of array 1 and array 2:\n\n");
	for(i=0;i<5;i++)
	{
		printf("sum[%d]=%d\n",i,arr1[i]+arr2[i]);
    }

}