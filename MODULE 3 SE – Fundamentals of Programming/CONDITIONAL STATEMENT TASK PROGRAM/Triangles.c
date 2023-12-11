#include<stdio.h>
main()
{
	int A,B,C;
	
	printf("Enter the value of A : ");
	scanf("%d",&A);
	
	printf("Enter the value of B : ");
	scanf("%d",&B);
	
	printf("Enter the value of C : ");
	scanf("%d",&C);
	
	if(A==B==C)
	{
		printf("Its a Equilateral Triangle");
	}
	
	else if(A==B && B==C && C==A)
	{
		printf("Its a Isoseles Triangle");
	}
	
	else
	{
		printf("Its a Scalane Triangle");
	}

}
