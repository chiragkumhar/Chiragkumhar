#include<stdio.h>
main()
{
	int n,count=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	printf("%d",count);
}