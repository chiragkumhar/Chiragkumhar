#include<stdio.h>
#include<string.h>
main()
{
	char s1[10];
	char s2[10];
	
	printf(" Enter S1 : ");
	gets(s1);
	
	printf("Enter S2 : ");
	gets(s2);
	
	strcat(s1,s2);
	
	printf("s1=%s",s1);
}
