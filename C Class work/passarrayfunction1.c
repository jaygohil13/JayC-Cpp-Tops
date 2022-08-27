#include<stdio.h>

void displayArray1(int*p)
{
	int i;
	printf("=====Array Elements 1:\n");
	for(i=0;i<5;i++)
	{
		printf("\nElements[%d]:%d",i,*(p+i));
	}
}
void displayArray2(int*q)
{
	int i;
	printf("\n\n=====Array Elements 2:\n");
	for(i=0;i<5;i++)
	{
		printf("\nElements[%d]:%d",i,*(q+i));
	}
}
void add(int arr1[],int arr2[])
{
	int i,sum[100];
	
	printf("\n\n----Addition of Array Elements 1 and Array Elements 2----\n\n");
	for(i=0;i<5;i++)
	{
		sum[i]=arr1[i]+arr2[i];
		printf("sum[%d]:%d\n",i,sum[i]);
	}
}
void main()
{
	int arr1[5]={10,20,36,45,47};
	int arr2[5]={5,10,15,20,25};
	displayArray1(arr1);
	displayArray2(arr2);
	add(arr1,arr2);
}
