#include<stdio.h>
main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("Number is Positive");
	}
	else if(num<0)
	{
		printf("Number is Negetive");
	}
	else
	{
		printf("Number is Zero");
	}
}
