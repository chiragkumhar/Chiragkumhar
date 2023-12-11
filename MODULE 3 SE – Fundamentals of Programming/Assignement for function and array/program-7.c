//Program- 7. WAP Find out length of string without using inbuilt function

#include<stdio.h>
main()
{
	char num[10]={25,36,5,6,8};
	int i,length=0;
	
	for(i=0;num[i] !='\0';i++)
	length++;
	{
		printf(" \n The length of the string is %d",length);
	}
}
