#include<stdio.h>
main()
{
	int n[5];
	int i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the Element %d:",i+1);
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+n[i];
	}
	printf("\n Sum = %d",sum);
} 
