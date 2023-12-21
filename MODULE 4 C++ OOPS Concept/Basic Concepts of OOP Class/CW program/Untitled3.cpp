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
main()
{
	Student obj;
	obj.inputdata();
	obj.displaydata();
}
