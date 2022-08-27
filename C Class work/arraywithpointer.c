#include<stdio.h>

void main()
{
	int arr[5] = {10,20,45,78,89}; //Array initialization
	
	int*ptr,i;
	ptr = arr;//
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}