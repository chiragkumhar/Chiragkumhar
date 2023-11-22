#include<stdio.h>
main()
{
	int V1,V2;
	printf("Enter Vehile_1 Speed : ");
	scanf("%d",&V1);
	
	printf("Enter Vehile_2 Speed : ");
	scanf("%d",&V2);
	
	if(V1>V2)
	{
		printf("Vehicle 1 will overtake Vehicle 2");
	}
	else if(V2>V1)
	{
		printf("Vehicle 2 will overtake Vehicle 1");
	}
	else
	{
	}
}
