#include<stdio.h>
main()
{
	int i,num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	
	printf("The Number is : %d ; The cube of Number is : %d\n",i,(i*i*i));
}
