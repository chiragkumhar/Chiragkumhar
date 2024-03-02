//3. Create a class person having members name and age. 
//Derive a class student having member percentage.
//Derive another class teacher having member salary. 
//Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;

class person
{
	protected:
		string name;
		int age;
};
class student
{
	protected:
		float percentage;
};
class teacher : public person,public student
{
	float salary;
	public:
		void get_data()
		{
			cout<<"Enter the Name of Student : ";
			cin>>name;
			
			cout<<"Enter the Age of Student : ";
			cin>>age;
			
			cout<<"Enter the Percentage of Student : ";
			cin>>percentage;	
		}
		void display_data()
		{
			cout<<"\n Name of Student is : "<<name;
			cout<<"\n Age of Student is : "<<age;
			cout<<"\n Percentage of Student is : "<<percentage;
		}
};
main()
{
	teacher tea;
	tea.get_data();
	tea.display_data();
}
