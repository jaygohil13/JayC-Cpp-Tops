#include<stdio.h>

union Employee{
	int eid;
	char name[10];
	float esal;
};

void main()
{
	union Employee e1;
	
	printf("Enter Id :");
	scanf("%d",&e1.eid);
	printf("Id=%d",e1.eid);
	
	printf("\n\nEnter name :");
	scanf("%s",&e1.name);
	printf("name=%s",e1.name);
	
	printf("\n\nEnter salary :");
	scanf("%f",&e1.esal);
	printf("salary=%.2f",e1.esal);
	
	printf("\n\n union size is :%d",sizeof(e1));
}