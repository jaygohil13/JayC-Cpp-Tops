#include<stdio.h>
void add(int a, int b) 
{
	printf("\naddition:%d\n",(a+b));
}
void sub(int a, int b) 
{
	printf("\nsubtraction:%d\n",(a-b));
}
void multi(int a, int b) 
{
	printf("\nmultiplication:%d\n",(a*b));
}
void div(int a, int b) 
{
	printf("\ndivision:%d\n",(a/b));
}
void main()
{
	int a,b,choice;
	printf("enter value of a :");
	scanf("%d",&a);
	
	printf("enter value of b :");
	scanf("%d",&b);
	
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


