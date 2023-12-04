#include<stdio.h>
main()
{
	int n[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the Element : ");
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",n[i]);
	}
}
