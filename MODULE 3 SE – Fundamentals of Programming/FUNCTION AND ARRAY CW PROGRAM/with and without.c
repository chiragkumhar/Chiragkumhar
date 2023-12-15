#include<stdio.h>
void add (int a, int b) //parameters
{
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("The addtion of A and B is %d",a+b);
}
main()
{
	int a,b;
	add(a,b);
}
