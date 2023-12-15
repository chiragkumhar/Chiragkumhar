//Program 7. Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>

main()
{
	char s1[20];
	char s2[20];
	
	printf("Enter String 1 : ");
	gets(s1);
	
	strcpy(s2,s1);
	{
		printf("Stirng 1 : %s  ",s1);
		printf("\nValue After copy String 1 into String 2 : %s",s2);
	}
}
