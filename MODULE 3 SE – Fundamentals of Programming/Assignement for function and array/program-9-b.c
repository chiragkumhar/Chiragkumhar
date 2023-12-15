// Program- 9 Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage

#include<stdio.h>
struct information
{
	int empno,age;
	char name[20],address[20];
	
};
main()
{
	int j;
	struct information i;
	
	for(j=1;j<=5;j++)
	{
	printf("\nEnter the Employee Number : ");
	scanf("%d",&i.empno);
	
	printf("\nEnter Your Name : ");
	scanf("%s",&i.name);
	
	printf("\nEnter Your Age : ");
	scanf("%d",&i.age);
	
	printf("\nEnter Your Address : ");
	scanf("%s",&i.address);
	
	printf("\nEmployee Number is = %d",i.empno);
	printf("\nThe Name of Employee is %s",i.name);
	printf("\nThe Age of Employee is %d",i.age);
	printf("\nThe Address of Employee is %s",i.address);


	}
	



}
