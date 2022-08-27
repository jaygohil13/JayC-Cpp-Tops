#include<stdio.h>

void main()
{
	int i,number,sum=0;
	
	printf("enter the maximum limit value:");
	scanf("%d",&number);
	
	printf("\neven numbers between 0 and %d are:",number);
	for(i=1;i<=number;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
			sum=sum+i;
		}
	}
	printf("\nthe sum of all even numbers %d=%d",number,sum);
	
}