#include<stdio.h>

void main()
{
	int a[10],size,i,largest,position;
	
	printf("enter the size of elements :");
	scanf("%d",&size);
	
	printf("enter %d elements of an array :",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=1;i<size;i++)
	{
		if(largest<a[i])
		{
			largest=a[i];
			position=i;
		}
	}
	printf("\nlargest element in an array=%d",largest);
	printf("\n\nposition of the largest element=%d",position);
}