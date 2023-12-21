//Program- 8. Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>
main()
{
	char name[20];
	char check;
	
	int i,vcount=0,ccount=0;
	printf("Enter the Name : ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]!='a' && name[i]!='e' && name[i]!='i' && name[i]!='o' && name[i]!='u')
		{
			ccount++;
		}
		else
		{
			vcount++;
		}
	}
	printf("vcount = %d",vcount);
	printf("\nccount = %d",ccount);

}
