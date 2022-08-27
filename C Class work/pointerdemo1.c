#include <stdio.h>

void main()
{
	int a = 10, c = 30;
	printf("Printing Address of A through Variable : %u", &a);
	printf("\nPrinting Address of C through Variable : %u", &c);
	int *b;
	int *d;
	
	b = &a;  // Storing address of a Variable.
	d = &c; // Storing address of Variable.
	
	printf("\n\nPrinting Address of A through Pointer Variable : %u", b);
	printf("\n\nPrinting Address of C through Pointer Variable : %u", d);
	
	printf("\n\nPrinting Value of A through  Variable : %d", a);
	printf("\n\nPrinting Value of C through  Variable : %d", c);
	
	printf("\n\nPrinting Value of A through Pointer Variable : %d", *(b));
	printf("\n\nPrinting Value of C through Pointer Variable : %d", *(d));
	
	
}