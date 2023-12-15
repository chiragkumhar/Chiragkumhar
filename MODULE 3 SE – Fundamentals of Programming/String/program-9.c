//Program-9. Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
#include<stdio.h>
main() 

{
    char name[100];
    
    int max=0,length,i;

    printf("Enter a string : ");
    gets(name);

    length = strlen(name);

    for(i=0;i<length; i++) 
	{
        if(name[i] != '\n' && name[i] != '\0')
		{
            max++;
        }
    }

    printf("The maximum number of characters in the string is: %d\n",max);

}
