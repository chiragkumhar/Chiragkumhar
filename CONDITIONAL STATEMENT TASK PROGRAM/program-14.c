
// Program-14.WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	int Num_1,Num_2,Num_3;
	
	printf("Enter the Number_1 : ");
	scanf("%d",&Num_1);
	
	printf("Enter the Number_2 : ");
	scanf("%d",&Num_2);
	
	printf("Enter the Number_3 : ");
	scanf("%d",&Num_3);
	
	if(Num_1>Num_2 && Num_2>Num_3)
	{
		printf("Num_1 is largest");
	}
	else if(Num_2>Num_1 && Num_2>Num_3)
	{
		printf("Num_2 is largest");
	}
	else
	{
		printf("Num_3 is largest");
	}
}
