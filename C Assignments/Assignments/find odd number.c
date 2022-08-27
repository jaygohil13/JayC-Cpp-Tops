#include<stdio.h>

void main()
{
	int i,number;
	
	printf("please enter the maximum limit value:");
	scanf("%d",&number);
	
	printf("\nodd number between 1 and %d are:\n",number);
	for(i=1;i<=number;i++)
	{
		if(i % 2!=0)
		{
			printf("%d\t",i);
		}
	}
}