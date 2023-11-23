#include<stdio.h>
main()
{
	int day;
	printf("Enter the day : ");
	scanf("%d",&day);

	switch(day)
	{
		case 1:
			printf("Monday");
			break;
		
		case 2:
			printf("Tuesday");
			break;
			
		case 3:
			printf("Wed.");
			break;	
			
		case 4:
			printf("thus.");
			break;	
		case 5:
			printf("fri,");
			break;
		case 6:
			printf("sat.");
			break;
		case 7:
			printf("Tuesday");
			break;	
		default:
			printf("Invalied day");		
	}
	
}
