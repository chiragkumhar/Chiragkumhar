#include<stdio.h>
void swaping()
{
	int a,b;
	printf("Enter the Value of A : ");
	scanf("%d",&a);
	
	printf("Enter the Value of b : ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping a and b %d %d",a,b);
}
main()
{
	swaping();
}
