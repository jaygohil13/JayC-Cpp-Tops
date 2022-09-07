#include<stdio.h>
#include<string.h>

void main()
{
	char name[10] = "ABC";
	char sname[10] = "abc";
	char empty[10];
	
	printf("String Length:%d",strlen(name));
	printf("\nString Reverse:%s",strrev(name));
	printf("\nString Concatenate:%s",strcat(strcat(name,"\t"),sname));
	strcpy(empty,name);
	printf("\nString Copy:%s",empty);
	printf("\nString Compare:%d",strcmp(name,sname));
	printf("\nString Uppercase : %s",strupr(name));
	printf("\nString Lowercase : %s",strlwr(sname));
	
}