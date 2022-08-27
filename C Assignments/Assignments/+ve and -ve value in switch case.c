 #include<stdio.h>

void main()
{
	int a, choice;
	
	printf("Enter a no:");
	scanf("%d",&a);
	
	printf("\n------choice------\n");
	printf("\npress 1. +ve,\npress 2. -ve");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	if(a>0)
	{
		case 1: printf("\n +ve is %d",a);
		break;
		case 2: printf("\n -ve is %d",a);
		break;
		default:printf("\n invalid choice------");
		break;
	}
}