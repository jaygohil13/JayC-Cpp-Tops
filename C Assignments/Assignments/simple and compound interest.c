#include<stdio.h>

void main()
{
	int p,r,t;
	float si,ci;
	printf("\nenter number of principal,rate and time");
	scanf("%d%d%d",&p,&r,&t);
	si=p*r*t/100;
	printf("simple interest is%.2f",si);

    ci=p*(((1+r/100),t));
	printf("\ncompound interest=%.2f",ci);	
}