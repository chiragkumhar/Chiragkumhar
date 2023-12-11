//PROGRAM - 29.Convert minutes into seconds and hours
#include<stdio.h>
main()
{
	int Minutes, Seconds, Hours;
	
	printf("Enter the Mintues : ");
	scanf("%d",&Minutes);
	
	Seconds = Minutes*60;
	Hours = Minutes/60;
	
	printf("After Converting minutes into seconds %d",Seconds);
	printf("\nAfter Converting minutes into hours %d",Hours);
	
	
}
