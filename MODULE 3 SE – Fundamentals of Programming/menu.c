#include<stdio.h>
main()
{
	int press_num,a,b,i,f=1;
	
	printf("MENU : ");
	printf("\n Press 1 for find the factorial of number");
	printf("\n Press 2 for find the fibonacci series");
	printf("\n Press 3 to find the number is even or odd");
	printf("\n Press 4 to check max between two number");
	
	printf("\n\n Enter the Press Number : ");
	scanf("%d",&press_num);
	
	if(press_num==1)
	{
		int a=5;
		for(i=1; i<=a; i++)
		{
			f=f*i;
		}
		printf("The Factorial of given Number is : %d",f);
	}
	else if (press_num==2)
	{
		int n,num1=0,num2=1,nextnum;
		
		printf("Enter the Number : ");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		{
			printf("%d",num1);
			nextnum=num1+num2;
			num1=num2;
			num2=nextnum;
		}		
	}
	else if (press_num==3)
	{
		int a;
		printf("Enter the Number : ");
		scanf("%d",&a);
		
		if(a%2==0)
		{
			printf("The number is even ");
		}
		else
		{
			printf("The number is odd ");
		}
	}
	else if (press_num==4)
	{
		int b,c;
		printf("Enter two Numbers : ");
		scanf("%d%d",&b,&c);
		
		if(b>c)
		{
			printf("%d is maximum",b);
		}
		else
		{
			printf("%d is maximum",c);	
		}
	}
	
	
	
}
