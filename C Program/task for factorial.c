#include<stdio.h>
main()
{
	int i,num, f=1;
	printf("Enter the Number : ");	
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		f=f*i;
	}
	printf("The Factorial of given Number %d is : %d",f);
	
}
