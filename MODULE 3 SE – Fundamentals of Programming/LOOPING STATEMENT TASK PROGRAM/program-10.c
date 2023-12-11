//Program-10.Write a program you have to make a summation of first and last Digit. (E.g.1234 Ans: -5)

#include<stdio.h>
main()
{
	int n,r,sum=1,l=5,a;
	printf("Enter the Number : ");
	scanf("%d",&n);
	

	
	while(n!=0)
	{
		r=n%10;
		a=l+sum;
		n=n/10;
			
	}
	printf("%d",a);
	
	
}
