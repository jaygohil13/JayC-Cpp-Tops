#include <stdio.h>  
void main()  
{  
  char string1[20]; // char array declaration  
  char string2[20]; // char array declaration  
  int i=0,j=0; // declaration of integer variables
    
  char *str1; // declaration of char pointer  
  char *str2;  // declaration of char pointer 
    
  printf("Enter the first string :");  
  scanf("%s",string1);  
  printf("\nEnter the second string :");  
  scanf(" %s",string2);  
  for(i=0;string1[i]!='\0';i++); 
  for(j=0;string2[j]!='\0';j++)
  {
        string1[i]=string2[j];
        i++;
  } 
    string1[i]='\0';
    printf("\nAfter The concatenated string is : %s",string1);   
}  