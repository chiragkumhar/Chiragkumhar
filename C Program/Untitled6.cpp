#include<stdio.h>
main()
{
	int i,num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	while(i>=num)
	{
		printf("\n%d",i);
		i--;
	}
}
