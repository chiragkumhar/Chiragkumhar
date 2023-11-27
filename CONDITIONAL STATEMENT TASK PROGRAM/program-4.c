// Program-4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement 

#include<stdio.h>
main()
{
	int choice;
	printf("Enter the Choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("Additon");
		break;
		
		case 2:
		printf("Subtraction");
		break;
		
		case 3:
		printf("Multiplicaton");
		break;

		case 4:
		printf("Division");
		break;

		case 5:
		printf("Modulo");
		break;
		
		default:
		printf("Invalid Choice");
	}
}
