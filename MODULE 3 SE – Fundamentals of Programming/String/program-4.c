//Program- 4. Write a program in C to count the total number of words in a string.

#include<stdio.h>
#include<string.h>
main()

{
	char name[20]={"Chirag Prajapati"};
	int i,count=0;
	
	for(i=0;name[i] !='\0';i++)
	count++;
	{
		printf(" \n The Total number of Words in a given String : %d",count);
	}
}
