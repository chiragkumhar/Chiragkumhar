// Program-2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>
main()
{
	int num;
	printf(" Enter the Number : ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
		printf(" Addition ");
		break;
		
		case 2:
		printf(" Subtraction ");
		break;
		
		case 3:
		printf(" Multiplication ");
		break;
		
		case 4:
		printf(" Division ");
		break;
		
		default:
			printf(" Invalid Number ");
		
	}
	
}
