#include<stdio.h>
main()
{
	int n[5]={10,20,30,5,90};	
	int low,i;
	
	low= n[0];
	
	for(i=1;i<5;i++)
	{
		if(low>n[i])
		low= n[i];
	}
	printf("The Lowest Number of given array is : %d",low);
	
	
}
