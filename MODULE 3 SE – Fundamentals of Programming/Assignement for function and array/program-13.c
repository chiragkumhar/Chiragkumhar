// Program 13.WAP to accept 5 numbers from user and check entered number is even or odd  using of array

#include<stdio.h>
main()
{
	int num[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		if(num[i] % 2==0)
		{
			printf("\n %d is Even ",num[i]);
		}
		else
		{
			printf("\n %d is Odd",num[i]);
		}
	}
}
