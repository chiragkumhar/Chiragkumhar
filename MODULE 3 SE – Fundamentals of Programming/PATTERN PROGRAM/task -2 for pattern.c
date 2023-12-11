#include<stdio.h>
main()
{
	int row,col;
	for(row=5;row>=1;row--)
	{
		for(col=5;col>=row;col--)
		{
			printf("%d",row);		
		}
		printf("\n");
	}
	
}

