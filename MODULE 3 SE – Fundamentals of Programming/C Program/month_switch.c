#include<stdio.h>
main()
{
	int Month;
	printf("Enter the Month Name : ");
	scanf("%d",&Month);
	
	switch(Month)
	{
		case 1:
			printf("31 days available in January month");
			break;
		
		case 2:
			printf("28 days available in Feb. month");
			break;
		
		case 3:
			printf("31 days available in March month");
			break;
		
		case 4:
			printf("30 days available in April month");
			break;
		
		case 5:
			printf("31 days available in May month");
			break;	
		
		case 6:
			printf("31 days available in Jun month");
			break;
				
		case 7:
			printf("31 days available in July month");
			break;
		
		case 8:
			printf("31 days available in August month");
			break;
			
		case 9:
			printf("31 days available in Sept. month");
			break;
			
		case 10:
			printf("31 days available in Oct. month");
			break;	
		
		case 11:
			printf("31 days available in Nov month");
			break;
		
		case 12:
			printf("31 days available in Dec. month");
			break;
		
		default:
			printf("Invalid Month");									
	}
}
