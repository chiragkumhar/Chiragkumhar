// Program - 10.WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
main()
{
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf(" Its a Positive Number ");
	}
	else if(num<0)
	{
		printf(" Its a Negetive Number ");
	}
	else
	{
		printf(" Its a Zero ");
	}
}
