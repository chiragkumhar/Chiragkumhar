#include<stdio.h>
main()
{
	int a,b,swap;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	swap=a;
	a=b;
	b=swap;
	
	printf("After swapping the value of a is %d",a);
	printf("\nAfter swapping the value of b is %d",b);
}
