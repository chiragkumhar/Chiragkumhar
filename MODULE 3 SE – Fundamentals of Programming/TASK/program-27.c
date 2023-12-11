//PROGRAM - 27.Convert days into months

#include<stdio.h>
main()
{
	int Days, Month;
	printf("Enter the days : ");
	scanf("%d",&Days);
	
	Month= Days/30;
	
	printf("After converting Days into Month %d",Month);
}
