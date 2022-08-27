#include<stdio.h>

void main()
{
	int i,number,sum=0;
	printf("please enter the maximum limit value:");
	scanf("%d",&number);
	
	printf("\nodd numbers between 0 and %d are:",number);
	for(i=1;i<=number;i++)
	{
		if(i%2!=0)
		{
			printf("%d",i);
			sum=sum + i;
		}
	}
	printf("\n\nthe sum of odd numbers from 1 to %d=%d",number,sum);
}