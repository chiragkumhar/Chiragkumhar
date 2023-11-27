//Program - 16.Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:

#include<stdio.h>
main()
{
	int temp;
	printf("Enter the Temperature into Centigrade : ");
	scanf("%d",&temp);
	
	if(temp<0)
	{
		printf(" The Weather is Freezing ");
	}
	else if(temp>0 && temp<=10)
	{
		printf("The Weather is Very Cold ");
	}
	else if(temp>10 && temp<=20)
	{
		printf("The Weather is Cold");
	}
	else if(temp>20 && temp<=30)
	{
		printf("The Weather is Normal");
	}
	else if(temp>30 && temp<=40)
	{
		printf("The Weather is Hot");
	}
	else
	{
		printf("The Weather is Very Hot");
	}
}

