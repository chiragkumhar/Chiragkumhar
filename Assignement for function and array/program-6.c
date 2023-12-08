// Program 6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
main()
{
	int a[2][3]={6,4,6,7,7,9};
	int b[2][3]={6,4,6,7,7,9};
	int c[2][3];
	int row,col;
	
	
	printf(" First matrix \n ");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",a[row][col]);
		}
		
		printf("\n");
	}
	
	printf(" Second matrix\n ");

	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	
	printf("*******************************");
	
	printf(" \n\n Additon matrix \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	
	printf("*******************************");
	
	printf(" \n\n Subtraction matrix \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]-b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	
	printf("*******************************");
	
	printf(" \n\n Multiplication matrix \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]*b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	
	
}
