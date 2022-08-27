#include<stdio.h>

void main()
{
	int Rollno,s1,s2,s3,s4,s5,total;
	float per;
	char Name[20 ];
	printf("\n------Accept Student Details-------\n");
	printf("\nEnter Name:");
	scanf("%s",&Name);
	printf("\nEnter Rollno:");
	scanf("%d",&Rollno);
	printf("\nEnter physics marks:");
	scanf("%d",&s1);
	printf("\nEnter chemistry marks:");
	scanf("%d",&s2);
	printf("\nEnter maths marks:");
	scanf("%d",&s3);
	printf("\nEnter sport marks:");
	scanf("%d",&s4);
	printf("\nEnter english marks:");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	printf("\npcmse Marks is : %d",total);
	per = (float)total / 5;
	printf("\npcmse Percentage is : %.2f",per);
	
	if(per>75)
	{
		printf("\nDistinction");
	}
	else if(per>60)
	{
		printf("\nFirst class");
	}
	else if(per>50)
	{
		printf("\nSecond class");
	}
	else if(per>40)
	{
		printf("\nThird Class");
	}
	else
	{
		printf("\nFail");
	}
}