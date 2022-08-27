#include<stdio.h>
#include<string.h>

struct Employee{
	int eid;
	char name[1];
	float esal;
};
void main()
{
	int i;
	struct Employee e1[3];
	
	printf("\n======Enter Employee Details======\n");
	for(i=0;i<3;i++)
	{
		printf("\nEnter Id :");
		scanf("%d",&e1[i].eid);
		printf("Enter Name :");
		scanf("%s",&e1[i].name);
		printf("Enter Salary :");
		scanf("%f",&e1[i].esal);
	}
	
	printf("\n======Employee Details List======\n");
	for(i=0;i<3;++i)
	{
		printf("\n\nId=%d",e1[i].eid);
		printf("\nName=%s",e1[i].name);
		printf("\nnSalary=%.2f",e1[i].esal);
	}
}
