// Program-22. Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>
main()
{
	int num,i,n,t;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	t=num;
	while(i<=num)
	{
		i=num%10;
		n=i/10;
	}
	if(num=n)
	{
		printf("The Number is Palindrome ");
	}
	else
	{
		printf("The Number is Not a Palindrome ");
	}
	
}
