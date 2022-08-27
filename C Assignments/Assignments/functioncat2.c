#include<stdio.h>

void add(int a,int b) // cat2-> No return type and with parameter // formal parameters
{
	printf("\nAddition = %d",(a+b));
}
void sub(int a,int b)
{
	printf("\nSubtraction = %d",(a-b));
}
void mul(int a,int b)
{
	printf("\nMultiplication = %d",(a*b));
}
void div(int a,int b)
{
	printf("\ndivision = %d",(a/b));
}
void main()
{
	int a = 30, b =10;
	add(a,b);  // passing actual parameters
	sub(a,b);
	mul(a,b);
	div(a,b);
}