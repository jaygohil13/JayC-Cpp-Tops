#include<iostream>
#include<string.h>
using namespace std;

class STRINGADD{
	public:
		 char s1[10];
		 char s2[10];
		 
		STRINGADD(char str1[10] , char str2[10])
		{
			
			strcpy(s1,str1);
			strcpy(s2,str2);
		}
		
		 void operator+()
		{
			cout<<"Concatenate : "<<strcat(s1,s2);
		}
}; 

int main()
{
	char str1[10]="Jay";
	char str2[10]=" Gohil";
	STRINGADD s(str1,str2);
	+s;
	return 0;
}