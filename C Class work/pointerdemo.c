#include<stdio.h>

void main()
{
	int a = 10,c = 30;
	printf("\nPrinting Address of A through variable:%u",&a);
	printf("\n\nPrinting Address of C through variable:%u",&c);
	int *b;
	int *d;
	
	b=&a;  // storing address of a variable.
	d=&c;  // storing address of a variable.
	
	printf("\n\nPrinting Address of A through pointer variable:%u",b);
	printf("\n\nPrinting Address of C through pointer variable:%u",d);
	
	printf("\n\nPrinting value of A through  variable:%d",a);
	printf("\n\nPrinting value of C through  variable:%d",c);
	
	printf("\n\nPrinting value of A through pointer variable:%d",*(b));
	printf("\n\nPrinting value of C through pointer variable:%d",*(d));
	
	
	
}