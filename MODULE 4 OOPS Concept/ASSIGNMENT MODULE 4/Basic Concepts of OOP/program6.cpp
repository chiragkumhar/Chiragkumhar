//6. Write a C++ program to create a class called Person that has private member variables for name, age and country. 
//Implement member functions to set and get the values of these variables.

#include<iostream>
using namespace std;
class Person
{
	string name,country;
	int age;
	public:
		
			void get_data()
			{
				cout<<"Enter Your Name : ";
				cin>>name;
				
				cout<<"Enter Your Age : ";
				cin>>age;
				
				cout<<"Enter Your Country : ";
				cin>>country;
			}
			void display_data()
			{
				cout<<" \n Name : "<<name;
				cout<<" \n Age : "<<age;
				cout<<" \n Country : "<<country;
			}
		
};
main()
{
	Person per;
	per.get_data();
	per.display_data();
}
