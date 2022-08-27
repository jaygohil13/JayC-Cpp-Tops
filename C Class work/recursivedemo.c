#include<stdio.h>

void f1()
{
	f1(); // A function which calls itself is called a recursive function.
	printf("hii");
}

void main()
{
	f1();
}