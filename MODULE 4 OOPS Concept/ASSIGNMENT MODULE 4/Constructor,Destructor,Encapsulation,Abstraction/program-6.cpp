//6. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
// Include member functions to calculate and set salary based on employee performance. Using of constructor

#include<iostream>
using namespace std;

class Employee
{
	string name;
	int id;
	float salary;
	
	public:
		Employee()
		{
			cout<<"Enter the Employee Name : ";
			cin>>name;
			
			cout<<"Enter the Employee ID : ";
			cin>>id;
			
			cout<<"Enter the Employee Salary : ";
			cin>>salary;
		}	
		void display_data()
		{	
			cout<<" \n Employee Name is : "<<name;
			cout<<" \n Employee ID : "<<id;	
			cout<<" \n Enter the Employee Salary : "<<salary;				
		}
};	
main()
{
	Employee emp;
	emp.display_data();
}
