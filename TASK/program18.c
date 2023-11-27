//Program-18.Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
main()
{
	int sprice,cprice,plamt;
	printf("Enter the Selling Price : ");
	scanf("%d",&sprice);
	
	printf("Enter the Cost Price : ");
	scanf("%d",&cprice);
	
	
	
	if(sprice>cprice)
	{
		plamt= sprice-cprice;
		printf("You are in Profit");
	}
	else if(cprice>sprice)
	{
		plamt= cprice-sprice;
		printf("You are in loss");
	}
	else 
	{
		printf("No Profit No loss ");
	}

}
