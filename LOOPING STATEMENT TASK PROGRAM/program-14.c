//Program14. Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
main()
{
	int i,num,f=1;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&num);
		f=f*i;	
	}
	printf("The Factorial of Given Number is : %d",f);
}
