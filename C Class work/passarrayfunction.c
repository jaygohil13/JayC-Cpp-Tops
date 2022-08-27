#include<stdio.h>

void show(int *a)
{
	printf("%d\t",*a);
}
void main()
{
	int arr[5] = {10,20,30,47,89};
	int i;
	for(i=0;i<5;i++)
	{
		show(arr + i);
	}
}