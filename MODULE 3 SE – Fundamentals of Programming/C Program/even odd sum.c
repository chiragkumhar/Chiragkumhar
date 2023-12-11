#include<stdio.h>
main()
{
	int num,i,sum=0,odd_sum=0;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			sum= sum + i;
		}
		else
		{
			odd_sum = odd_sum+i;
		}
	}
	printf("\nsum of even = %d",sum);
	printf("\nsum of odd = %d",odd_sum);
}
