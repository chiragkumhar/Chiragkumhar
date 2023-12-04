#include<stdio.h>
main()
{
	int i,row=5,col;
	for(i=row;i>=1;i--)
	{
		for(col=1;col<=i;col++)
		{
			printf("*");
		}
		printf("\n");
		
	}
}

