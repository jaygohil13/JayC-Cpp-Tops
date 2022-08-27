#include<stdio.h>

void main()
{
	int arr[5],i,j,k,n;
	
	printf("\nEnter The Size Of Array : ");
	scanf("%d",&n);
    
    for(i=0;i<5;i++)
	{
		printf("\nEnter Elements[%d] = :",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n sort elements is %d",arr[i]);
	}
}