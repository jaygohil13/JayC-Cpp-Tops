#include<stdio.h>

void main()
{
	int a,b,choice;
	printf("enter the value for a:");
	scanf("%d",&a);
	printf("enter the value for b:");
	scanf("%d",&b);
	printf("\na=%d,b=%d",a,b);
	
	printf("\n------choice calculation------\n");
	printf("\npress 1.addition,\npress 2.substraction,\npress 3.multiplication,\npress 4.division");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("\naddition is %d",a+b);
		break;
		case 2: printf("\nsubstraction is %d",a-b);
		break;
		case 3: printf("\nmultiplication is %d",a*b);
		break;
		case 4: printf("\ndivision is %.2f",a/(float)b);
		break;
		default:printf("\ninvalid choice");
	}
}