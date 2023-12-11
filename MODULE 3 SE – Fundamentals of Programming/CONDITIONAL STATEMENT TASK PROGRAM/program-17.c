//Program - 17.Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
main()
{
	int a,b,c,sum;
	printf("Enter the Value Of A : ");
	scanf("%d",&a);
	
	printf("Enter the Value Of B : ");
	scanf("%d",&b);
	
	printf("Enter the Value Of C : ");
	scanf("%d",&c);
	
	sum=a+b+c;
	
	if(sum == 180)
	{
		printf("The Triangle can be Formed");
	}
	else
	{
		printf("The Triangle can not Being Formed");
	}


	
}
