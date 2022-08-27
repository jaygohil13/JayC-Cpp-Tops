#include<stdio.h>

void main()
{
	char c;
	printf("enter an alphabet=\n");
	scanf("%c",&c);
	
	
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':	
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':printf("%c is vowel",c);
		break;
		default:printf("%c is consonant",c);
    }
}