#include<iostream>
using namespace std;

class Company
{
	public:
		int company_id;
		string company_name;
		string company_address;
		float sales;
	
		void inputdata()
		{
			cout<<"Enter Company ID : ";
			cin>>company_id;
			
			cout<<"Enter Company Name : ";
			cin>>company_name;
			
			cout<<"Enter Comapny Address : ";
			cin>>company_address;
			
			cout<<"Enter Sales : ";
			cin>>sales;
		}
		void displaydata()
		{
			cout<<"\nCompany ID : "<<company_id;
			cout<<"\nCompany Name : "<<company_name;
			cout<<"\nComapny Address : "<<company_address;
			cout<<"\nSales : "<<sales;
		}
};
class Employee
{
	public:
		int employee_id;
		string employee_name;
		string employee_department;
		float salary;
		
		void inputdata()
		{
			cout<<"Enter Employee ID : ";
			cin>>employee_id;
			
			cout<<"Enter Employee Name : ";
			cin>>employee_name;
			
			cout<<"Enter Employee Department : ";
			cin>>employee_department;
			
			cout<<"Enter Salary : ";
			cin>>salary;
		}
		void displaydata()
		{
			cout<<"\n Employee ID : "<<employee_id;
			cout<<"\n Employee Name : "<<employee_name;
			cout<<"\n Employee Department : "<<employee_department;
			cout<<"\n Salary : "<<salary;
		}		
};
main()
{
	Company cobj;
	Employee eobj;
	
	cobj.inputdata();
	cobj.displaydata();
	
	eobj.inputdata();
	eobj.displaydata();
}
