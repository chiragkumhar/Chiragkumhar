//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;
class Calculator
{
	int n1,n2;
	public:
		Calculator()
		{
			cout<<"Enter the Value of Number 1 : ";
			cin>>n1;
			
			cout<<"Enter the Value of Number 2 : ";
			cin>>n2;
		}
		void Addition()
		{
			cout<<"\n Addition of "<<n1<<" and "<<n2<<" is : "<<n1+n2;
		}
			
		void Subtraction()
		{
			cout<<"\n Subtraction of "<<n1<<" and "<<n2<<" is : "<<n1-n2;			
		}
		
		void Division()
		{
			cout<<"\n Division of "<<n1<<" and "<<n2<<" is : "<<n1/n2;			
		}
		
		void Multiplication()
		{
			cout<<"\n Multiplication of "<<n1<<" and "<<n2<<" is : "<<n1*n2;			
		}		
};
main()
{
	Calculator cal;
	cal.Addition();
	cal.Subtraction();
	cal.Division();
	cal.Multiplication();
}
