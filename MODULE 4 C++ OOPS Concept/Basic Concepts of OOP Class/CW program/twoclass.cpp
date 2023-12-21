#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		string subject;
		
		void inputdata() // member funciton
		{
			cout<<"Enter id : ";
			cin>>id;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Subject : ";
			cin>>subject;
		}
		
		void displaydata() // member funciton
		{
			cout<<"\n ID : "<<id;
			cout<<"\n NAME : "<<name;
			cout<<"\n Subject : "<<subject;
		}		
};
class faculty
{
	public:
		int id;
		string name;
		string department;
		
		void inputdata()
		{
			cout<<"\n Enter id : ";
			cin>>id;
			cout<<"Enter Faculty name : ";
			cin>>name;
			cout<<"Enter Faculty department : ";
			cin>>department;
		}
		void displaydata()
		{
			cout<<"\nFaculty ID :"<<id;
			cout<<"\nFaculty Name : "<<name;
			cout<<"\nFaculty Department : "<<department;
		}
};
main()
{
	Student obj;
	faculty fobj;
	
	obj.inputdata();
	obj.displaydata();
	
	fobj.inputdata();
	fobj.displaydata();
	
}
