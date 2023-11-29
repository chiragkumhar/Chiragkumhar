// Program - 6. WAP to print Fibonacci series up to given numbers

#include<stdio.h>
main()
{
	int n,num1=0,num2=1,nextnum,i;
	printf("Enter the Number to Start Fibbonaci series : ");
	scanf("%d",&n);
	
	printf("Fibbonaci Series : ");
	
	for(i=1;i<=n;i++)
	{
		printf("%d",num1);
		nextnum=num1+num2;
		num1=num2;
		num2=nextnum;
	}
	
}
