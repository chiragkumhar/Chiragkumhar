#include<stdio.h>
main()
{
	int num;
	printf("Enter the num : ");
	scanf("%d",&num);
	
	if(num%5==0 && num%11==0)
	{
		printf("The Number is Divisible by 5 ");
	}
	
	else
	{
		printf("The Number is not Divible by 5 and 11");
	}
}
