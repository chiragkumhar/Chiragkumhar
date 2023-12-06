// Program- 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
main()
{
	int n,i,j,sum=0;
	printf("Enter the N Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
		{
			sum+=j;
		}
		if(i!=1)
		{
			printf(" + ");	
		}
		
		printf("(%d)",i,i);
	}
	
}
