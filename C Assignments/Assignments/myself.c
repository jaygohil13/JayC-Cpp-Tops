#include<stdio.h>

void main()
{
	int age;
	char birthdate;
	char name[50],address[50];
	
	printf("Enter your Name :");
	scanf("%s",&name);
	
	printf("\nEnter Birthdate :");
    scanf("%s",&birthdate);
    
    printf("\nAge :");
    scanf("%d",&age);
    
    printf("\nAddress :");
    scanf("%s",&address);
}