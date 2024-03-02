//3. Write a C++ program to create a class called Car that has private 
//member variables for company, model, and year. Implement member functions to get and set these variables.

#include<iostream>
using namespace std;
class Car
{
	string company,model;
	int year;
	public:
		void Company()
		{
			cout<<"Enter the Company Name : ";
			cin>>company;
		}
		void Model()
		{
			cout<<"Enter the Model Name : ";
			cin>>model;
		}
		void Year()
		{
			cout<<"Enter the Year : ";
			cin>>year;
		}
		void display_data()
		{
			cout<<"\n Car Company Name : "<<company;
			cout<<"\n Model Name : "<<model;
			cout<<"\n Launch Year : "<<year;
		}
};
main()
{
	Car ca;
	ca.Company();
	ca.Model();
	ca.Year();
	ca.display_data();
}
