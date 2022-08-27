#include<stdio.h>

void fibonacci()
{
	int n1=0,n2=1,n,i,n3;
	printf("Enter Any Number:");
	scanf("%d",&n);
	
	printf("%d%d",n1,n2);
	for(i=2;i<=n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\n",n3);
	}
}
void main()
{
	fibonacci();
}