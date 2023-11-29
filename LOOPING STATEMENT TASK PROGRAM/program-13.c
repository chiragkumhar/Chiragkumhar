// Program-13.calculate the Factorial of a Given Number using while loop
 
#include<stdio.h>
main()
{
	int i,num,f=1;
	printf("Enter the Number : ");
	scanf("%d",&num1,num2);
	i=1;
	
	while(i<=num)
	{
		f=f*i;
		i++;
	}
	
	printf("The Factorial of Given Number is : %d ",f);
	
}
