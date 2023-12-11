//PROGRAM- 28.Convert years into days and months

#include<stdio.h>
main()
{
	int Years,Days,Month;
	printf("Enter the Years : ");
	scanf("%d",&Years);
	
	Days = Years*365;
	
	printf("After Converting years into day %d",Days);
	
	Month = Years*12;
	
	printf("\n	After Converting years into Month %d",Month);
}
