#include<stdio.h>
int add(int a,int b)
{
	int sum;
	
	printf("Enter the value of A : ");
	scanf("%d",&a);
	
	printf("Enter the value of B : ");
	scanf("%d",&b);
	
		sum=a+b;
	
	   return sum;
	
}
main()
{
	int ans,a,b;
	ans=add(a,b);
	printf("The Addtion of A and B is %d ",ans);	
}
