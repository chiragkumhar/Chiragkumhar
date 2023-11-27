#include<stdio.h>
main()
{
	int num,i,sum=0;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum = sum+i;
	}
	printf("\n sum=%d",sum);
}
