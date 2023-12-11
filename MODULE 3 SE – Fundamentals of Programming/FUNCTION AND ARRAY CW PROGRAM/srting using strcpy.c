#include<stdio.h>
#include<string.h>
main()
{
	char s1[10]="Hello";
	char s2[10];
	
	strcpy(s2,s1);
	
	printf(" Copied String = %s ",s2);
}
