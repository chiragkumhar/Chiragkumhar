// Program-25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the N Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i!=1)
		{
			printf(" + ");
		}
		printf("(%d*%d)",i,i);
	}
}
