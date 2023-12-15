#include<stdio.h>
int recurse(int x)
{
	if(x>=1)
	{
		printf("\n Hello World ");
		recurse(x-1);	
	}	
}
main()
{
	recurse(5);
}
