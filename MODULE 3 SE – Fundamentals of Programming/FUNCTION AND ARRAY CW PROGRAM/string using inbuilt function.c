#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter your Name : ");
	gets(name);
	
	printf(" Name = %s ",name);
	
	printf("\n Uppercase=%s",strupr(name));
	printf("\n Lowercase=%s",strlwr(name));
	printf("\n Reverse=%s",strrev(name));
}
