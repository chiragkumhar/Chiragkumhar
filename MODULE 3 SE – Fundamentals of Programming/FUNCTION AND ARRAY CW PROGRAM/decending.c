#include<stdio.h>
main()
{
	int b[5]={5,9,8,52,6};
	int j,i,a,n;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(b[i]<b[j])
			{
				a=b[i];
				b[i]=b[j]; 
				b[j]=a;
			}		
		}	
	}
	printf("The Number in Decending order is : ");
	
	for(i=0;i<5;i++)
	{
		printf("\n%d",b[i]);
	}
	

	
}
