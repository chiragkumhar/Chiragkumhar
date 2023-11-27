#include<stdio.h>
main()
{
	int age;
	printf("Enter your Age : ");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("You are aligible to give Vote");
	}
	else
	{
		printf("You are not aligible to give Vote");
	}
}
