// Program-8-a. information -print and display empno, empname, address and age

#include<stdio.h>
#include<string.h>
struct information
{
	int empno,age;
	char name[20]; 
	char addres[20];
};

main()
{
	struct information i;
	
	printf("Enter the Employee Number : ");
	scanf("%d",&i.empno);
	
	printf("Enter Your Name : ");
	scanf("%s",&i.name);
	
	printf("Enter Your Age : ");
	scanf("%d",&i.age);
	
	printf("Enter Your Address : ");
	scanf("%d",&i.addres);
	
	printf("\nEmployee Number is = %d",i.empno);
	printf("\nThe Name of Employee is %d",i.name);
	printf("\nThe Age of Employee is %d",i.age);
	printf("\nThe Address of Employee is %d",i.addres);
	
	
}
