#include<stdio.h>
main()
{
	int num,i,t=1;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}


	
}
