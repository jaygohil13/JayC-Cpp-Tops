#include<stdio.h>

void main()
{
    int rollno,s1,s2,s3,total;
	float per;
	char name[10];
	printf("\n---------Accept Student Details-------\n");
	printf("\nEnter Roll No : ");
	scanf("%d",&rollno);
	printf("Enter Name :");
	scanf("%s",&name);
	printf("Enter Physics Marks : ");
	scanf("%d",&s1);
	printf("Enter Chemistry Marks :");
	scanf("%d",&s2);
	printf("Enter Maths Marks : ");
	scanf("%d",&s3);
	total = s1+s2+s3;
	printf("\nPCM Marks is : %d",total);
	per = (float)total / 3;
	printf("\nPCM Percentage is : %.2f",per);
	
	if(per > 75)
	{
		printf("\nDistinction");
	}
	else if(per > 60)
	{
		printf("\nGrade A");
	}
	else if(per > 50)
	{
		printf("\nGrade B");
	}
	else if(per > 40)
	{
		printf("\n Grade C");
	}
	else
	{
		printf("\nFail");
	}
}