#include<stdio.h>

int factorial() // return type
{
	int num,i,f=1;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	return f; // return value
}
main()
{
	int ans;
	ans=factorial();
	printf("The factorial is %d",ans);
}
