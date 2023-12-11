// Program-1 write a C program to accept two integers and check whether they are equal 

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("\nEnter the value of b : ");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("The Value of a and b is equal ");
	}
	else
	{
		printf("The value of a and b is not equal");
	}
}
