#include<stdio.h>
union person
{
	char name[20];
	int age;
	float salary;	
};
main()
{
	union person p;
	
	printf("Enter the Name : ");
	scanf("%s",&p.name);
	
	printf("Enter your Age : ");
	scanf("%d",&p.age);
	
	printf("Enter your salary : ");
	scanf("%f",&p.salary);
	
	printf("\n Name = %s",p.name);
	printf("\n Age = %d",p.age);
	printf("\n salary = %f",p.salary);
}
