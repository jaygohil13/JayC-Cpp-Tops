#include<stdio.h>

void main()
{
	int a,b;
	printf("before swapping\n");     
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("after swapping\n");
	
	printf("value of a is:%d\n",a);
	printf("value of b is:%d\n",b);
}