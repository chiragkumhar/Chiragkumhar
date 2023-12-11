#include<stdio.h>
void area()
{
	float r,area;
	printf("Enter the Radius : ");
	scanf("%f",&r);
	
	area=3.14*r*r;
	printf("The Area of Circle is : %f",area);
}
main()
{
	area();
}
