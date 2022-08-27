#include<stdio.h>

void main()
{
	int r,l,b,triangle=b,h;
	float area;
	printf("1:enter radius of circle=");
	scanf("%d",&r);
	area=3.14*r*r;
	printf(" area of circle=%.2f\n",area);
	
	printf("\n2:enter length & breadth of rectangle=");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf(" area of rectangle=%.2f\n",area);
	
	printf("\n3:enter base & height of triangle=");
	scanf("%d%d",&b,&h);
	area=(b*h)/2;
	printf(" area of triangle=%.2f",area);
	
}