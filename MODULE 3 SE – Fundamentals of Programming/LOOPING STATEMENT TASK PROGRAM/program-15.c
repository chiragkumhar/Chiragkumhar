//Program- 15.Calculate sum of 10 numbers using of while loop

#include<stdio.h>
main()
{
	int i,num,sum=0;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	i=1;
	while(i<=num)
	{
		sum=sum+i;
		i++;	
	}
	printf("Sum of The Given Number is : %d",sum);
	
}
