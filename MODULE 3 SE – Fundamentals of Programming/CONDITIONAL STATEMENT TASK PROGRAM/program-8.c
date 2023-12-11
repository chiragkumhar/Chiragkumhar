//Program-8 WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include<stdio.h>
main()
{
	int height;
	printf("Enter your Height in Centimeters : ");
	scanf("%d",&height);
	
	if(height>170)
	{
		printf("You are Taller ");
	}
	else
	{
		printf("You are Smaller");
	}
}
