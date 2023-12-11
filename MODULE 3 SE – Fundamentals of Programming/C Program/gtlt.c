#include<stdio.h>
main()
{
	int num1,num2;
	
	printf("Enter Number 1 : ");
	scanf("%d",&num1);
	
	printf("\nEnter Number 2 : ");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		printf("Number_1 is greater then Number_2");
	}
	else
	{
		printf("Number_2 is greater then Number_1");
	}
}
