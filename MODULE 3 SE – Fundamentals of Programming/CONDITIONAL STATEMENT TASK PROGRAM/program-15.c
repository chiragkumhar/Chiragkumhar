// Program 15. Write a C program to determine eligibility for admission to a professional course based on the following criteria.

#include<stdio.h>
main()
{
	int maths,phy,chem,Total;
	
	printf("Enter the Marks of Maths : ");
	scanf("%d",&maths);
	
	printf("Enter the Marks of Physics : ");
	scanf("%d",&phy);
	
	printf("Enter the Marks of Chemistry :  ");
	scanf("%d",&chem);
	
	Total= maths + phy + chem;
	printf("\n Total = %d",Total);
	printf("\n Total of Maths and Physics : %d",maths+phy);
	
	if(maths>=65 && phy>=55 && chem>=50 || (maths+phy)>=140)
	{
		printf("\n The candidate is eligible ");
	}
	else
	{
		printf("\n The candidate is not Eligible ");
	}
}
