#include<stdio.h>
main()
{
	int a=100,b=200;
	if(a==100)
	{
		if(b==200)
		{
			printf("The value of a is 100 and b is 200");
		}
		else
		{
			printf("Nested else");
		}
	}
	else
	{
		printf("main else");
	}
}
