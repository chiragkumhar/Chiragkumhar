#include<stdio.h>
main()
{
	int n[5]={20,50,30,5,90};	
	int max,i;
	
	max=n[i];
	
	for(i=1;i<5;i++)
	{
		if(max<n[i])
		max= n[i];
	}
	printf("The  Max Number of given array is : %d",max);
	
	
}
