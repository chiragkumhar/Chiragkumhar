// PROGRAM-21-2 Accept 2 numbers from user and swap 2 numbers without using 3rd variable. 

#include<stdio.h>
main()
{
	int a,b,swap;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping the value of a is %d",a);
	printf("\nAfter swapping the value of b is %d",b);
}
