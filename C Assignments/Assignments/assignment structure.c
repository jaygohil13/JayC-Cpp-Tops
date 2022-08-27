#include<stdio.h>


struct Employee{
	int eno,eage;
	char ename[20],eaddress[20]; 
};

void main()
{
	struct Employee e1,e2,e3,e4,e5;
	
// struct employee 1;
	printf("\n/*//*//*//*//*//*ACCEPT EMPLOYEE 1 DETAILS*/*//*//*//*//*");
	printf("\n\nEnter Employee Number :");
	scanf("%d",&e1.eno);
	printf("\nEnter Employee Name :");
	scanf("%s",&e1.ename);
	printf("\nEnter Employee Age :");
	scanf("%d",&e1.eage);
	printf("\nEnter Employee Address :");
	scanf("%s",&e1.eaddress);
	
   printf("\n\n/*//*//*//*//*DISPLAY EMPLOYEE 1 DETAILS//*//*//*//*");	
   printf("\n\nEmployee Number : %d",e1.eno);
   printf("\n\nEmployee Name : %s",e1.ename);
   printf("\n\nEmployee Age : %d",e1.eage);
   printf("\n\nEmployee Address : %s",e1.eaddress);
   
// struct employee 2;
	printf("\n\n/*//*//*//*//*//*ACCEPT EMPLOYEE 2 DETAILS*/*//*//*//*//*");
	printf("\n\nEnter Employee Number :");
	scanf("%d",&e2.eno);
	printf("\nEnter Employee Name :");
	scanf("%s",&e2.ename);
	printf("\nEnter Employee Age :");
	scanf("%d",&e2.eage);
	printf("\nEnter Employee Address :");
	scanf("%s",&e2.eaddress);
	
   printf("\n\n/*//*//*//*//*DISPLAY EMPLOYEE 2 DETAILS//*//*//*//*");	
   printf("\n\nEmployee Number : %d",e2.eno);
   printf("\n\nEmployee Name : %s",e2.ename);
   printf("\n\nEmployee Age : %d",e2.eage);
   printf("\n\nEmployee Address : %s",e2.eaddress);

// struct employee 3;
	printf("\n\n/*//*//*//*//*//*ACCEPT EMPLOYEE 3 DETAILS*/*//*//*//*//*");
	printf("\n\nEnter Employee Number :");
	scanf("%d",&e3.eno);
	printf("\nEnter Employee Name :");
	scanf("%s",&e3.ename);
	printf("\nEnter Employee Age :");
	scanf("%d",&e3.eage);
	printf("\nEnter Employee Address :");
	scanf("%s",&e3.eaddress);
	
   printf("\n\n/*//*//*//*//*DISPLAY EMPLOYEE 3 DETAILS//*//*//*//*");	
   printf("\n\nEmployee Number : %d",e3.eno);
   printf("\n\nEmployee Name : %s",e3.ename);
   printf("\n\nEmployee Age : %d",e3.eage);
   printf("\n\nEmployee Address : %s",e3.eaddress);

// struct employee 4;
	printf("\n\n/*//*//*//*//*//*ACCEPT EMPLOYEE 4 DETAILS*/*//*//*//*//*");
	printf("\n\nEnter Employee Number :");
	scanf("%d",&e4.eno);
	printf("\nEnter Employee Name :");
	scanf("%s",&e4.ename);
	printf("\nEnter Employee Age :");
	scanf("%d",&e4.eage);
	printf("\nEnter Employee Address :");
	scanf("%s",&e4.eaddress);
	
   printf("\n\n/*//*//*//*//*DISPLAY EMPLOYEE 4 DETAILS//*//*//*//*");	
   printf("\n\nEmployee Number : %d",e4.eno);
   printf("\n\nEmployee Name : %s",e4.ename);
   printf("\n\nEmployee Age : %d",e4.eage);
   printf("\n\nEmployee Address : %s",e4.eaddress);

// struct employee 5;
	printf("\n\n/*//*//*//*//*//*ACCEPT EMPLOYEE 5 DETAILS*/*//*//*//*//*");
	printf("\n\nEnter Employee Number :");
	scanf("%d",&e5.eno);
	printf("\nEnter Employee Name :");
	scanf("%s",&e5.ename);
	printf("\nEnter Employee Age :");
	scanf("%d",&e5.eage);
	printf("\nEnter Employee Address :");
	scanf("%s",&e5.eaddress);
	
   printf("\n\n/*//*//*//*//*DISPLAY EMPLOYEE 5 DETAILS//*//*//*//*");	
   printf("\n\nEmployee Number : %d",e5.eno);
   printf("\n\nEmployee Name : %s",e5.ename);
   printf("\n\nEmployee Age : %d",e5.eage);
   printf("\n\nEmployee Address : %s",e5.eaddress);
   
}