#include<stdio.h>
    
struct employee{
	int eid;
	char name[10];
	float esal;
};

void main()

{
	struct employee e1;
	
	printf("\n=======ACCEPT EMPLOYEE 1 DETAILS=======");
	printf("\n\nEnter Id :");
	scanf("%d",&e1.eid);
	printf("\nEnter name :");
	scanf("%s",&e1.name  );
	printf("\nEnter salary :");
	scanf("%f",&e1.esal);
	
	printf("\n\n=======DISPLAY EMPLOYEE 1 DETAILS=======");
	printf("\n\nId = %d",e1.eid);
	printf("\n\nname = %s",e1.name);
	printf("\n\nsalary = %.2f",e1.esal);
	
	printf("\n\nstructure size is :%d",sizeof(e1));
}