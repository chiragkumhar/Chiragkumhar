// Program-2. Write a program in C to separate individual characters from a string.

#include <stdio.h>  
#include <string.h>  
main()
  
{  
    char name[] = " CHIRAG "; 
	int i; 
	
    printf("Individual characters from given string:\n");  
      
    for(i = 0; i < strlen(name);i++)
	{  
        printf("%c ",name[i]); 
    }  
}
