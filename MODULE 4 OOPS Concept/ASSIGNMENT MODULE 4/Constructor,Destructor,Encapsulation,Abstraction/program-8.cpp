//8. Write a C++ program to implement a class called Student that has private member variables for
//name, class, roll number, and marks. 
//Includemember functions to calculate the grade based on the marks and display the student's information.
//Accept address from each student implement using of aggregation

//8. Write a C++ program to implement a class called Student that has private 
//member variables for name, class, roll number, and marks. Include 
//member functions to calculate the grade based on the marks and display 
//the student's information. Accept address from each student implement 
//using of aggregation

#include<iostream>
using namespace std;
class student
{
	public:
			
		string name;
		int class_no;
		int roll_no;

	public:
		student()
		{
			cout<<" Enter Student Name : ";
			cin>>name;
			cout<<" Enter Class : ";
			cin>>class_no;
			cout<<" Enter Roll_No : ";
			cin>>roll_no;		
		}
};
class result
{
	int marks;
	student *str;
	public:
		void display(student *str1)
		{
			str=str1;
			cout<<" Enter the Marks : ";
			cin>>marks;
			cout<<"\n Name is : "<<str->name<<"\n Class is : "<<str->class_no<<"\n Roll_No is : "<<str->roll_no<<"\n Marks is : "<<marks;		
		}
};
int main()
{
	student obj;
	result obj1;
	obj1.display(&obj);
	return 0;
	
}
