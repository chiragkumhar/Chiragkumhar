#include<stdio.h>
#include<string.h>
main()
{
	char s1[10],s2[10];
	
	printf(" Enter S1 : ");
	gets(s1);
	
	printf("Enter S2 : ");
	gets(s2);
	
	if(strcmp(s1,s2)==0)
	{
		printf("Both the Strings are Same ");
	}
	else
	{
		printf("Both the Strings are not Same ");
	}
}
