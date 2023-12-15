//Program 5. Write a program in C to compare two strings without using string library functions.

#include<stdio.h>
#include<string.h>

main()
{
	char s1[20];
	char s2[20];
	
	printf("Enter String 1 : ");
	gets(s1);
	
	printf("Enter String 2 : ");
	gets(s2);
	
	if(strcmp(s1,s2))
	{
		printf("Both the String are Same");
	}
	else
	{
		printf("Both the String are not Same");
	}
}
