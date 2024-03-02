#include<iostream>
using namespace std;
class calculator
{
	int a,b;

	public:
		char ch;
		void choice()
		{
			cout<<"Enter the Choice : ";
			cin>>ch;
		}
		
		void get_data()
		{
			cout<<"Enter the value of A : ";
			cin>>a;
			
			cout<<"Enter the value of B : ";
			cin>>b;
		}
		
		void addition()
		{
			cout<<"Addition of A and B is : "<<a+b;
		}
		
		void subtraction()
		{
			cout<<"Subtraction of A and B is : "<<a-b;
		}
		
		void multiplication()
		{
			cout<<"Multiplication of A and B is : "<<a*b;
		}
		
		void divison()
		{
			cout<<"Division of A and B is : "<<a/b;
		}
		void modulo()
		{
			cout<<"Modulo of A and B is : "<<a%b;
		}
};
main()
{
	cout<<" Press + for Addition \n Press - for Subtraction \n Press * for Multiplication \n Press / for Division \n Press % for Modulo \n\n\n ";
	calculator obj;
	
	
	obj.choice();
	obj.get_data();
	
	switch(obj.ch)
	{
		case '+':
			obj.addition();
			break;


		case '-':
			obj.subtraction();
			break;
			

		case '*':
			obj.multiplication();
			break;
			

		case '/':
			obj.divison();
			break;
			

		case '%':
			obj.modulo();
			break;
			
	}
}
	

