#include<stdio.h>
main()
{
	int *p,*q,a=10,b=20;
	p=&a;
	q=&b;
	
	printf("The value of a is %d",a);
	printf("\n The value of a is %d",b);
	printf("\n The value of a is %x",p);
	printf("\n The value of a is %x",a);
	printf("\n The value of a is %x",b);
	
}
