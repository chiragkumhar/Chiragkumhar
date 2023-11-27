// Program-7 Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int marks;
	printf("Enter the Marks : ");
	scanf("%d",&marks);
	
	if(marks>40)
	{
		printf("You are Pass ");
	}
	else
	{
		printf("Sorry but you are Fail");
	}
}
