#include<stdio.h>
void name()
{
	char name[20]={"chirag"};
	int n=name[20];

	for(int i=1;n>=i;i--)
	{
		i=n%10;
		n=i/10;
	}
	
	
}
main()
{
	 name();
}
