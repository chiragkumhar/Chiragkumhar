//Program - 24. 1 + 2 + 3 + 4 + 5 + ... + n

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
		printf("%d ",i);
	}
}
