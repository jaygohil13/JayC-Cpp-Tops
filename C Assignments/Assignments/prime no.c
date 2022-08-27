#include<stdio.h>

void main()
{
	int i,n,flag=0;
	printf("enter no:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n% i==0)
		{
			flag++;
		}
	}
	if(flag==2)
	{
		printf("it is a prime no.");
	}
	else
	{
		printf("it is not a prime no.");
	}
}