//8. Write a program to Mathematic operation like Addition, Subtraction,Multiplication, Division Of 
//two number using different parameters and Function Overloading

#include<iostream>
using namespace std;
class calculater
{
	int num1,num2;
	double ans;
	public:
		void result()
		{
			cout<<" Enter the Value of Number 1 : ";
			cin>>num1;
			
			cout<<" Enter the Value of Number 2 : ";
			cin>>num2;
			
			ans = num1+num2;
			cout<<" \n Addition of Number 1 and Number 2 is : "<<ans;
		}
			
		void result(int a , int b)
		{
			ans=a-b;
			cout<<" \n Subtraction of Number 1 and Number 2 is : "<<ans;
		}
		
		void result(double a,double b)
		{
			ans=a*b;
			cout<<" \n Multiplication of Number 1 and Number 2 is : "<<ans;
		}
		
		void result(double a)
		{
			double b;
			cout<<" Enter 2nd value for Divison of Double Datatype : ";
			cin>>b;
			if(b==0)
			{
				cout<<" Can't divide by Zero ";
			}
			else
			{
				ans=a/b;
				cout<<" \n Divison of Number 1 and Number 2 is : "<<ans;
			}
		}
		void result(int a)
		{
			int b;
			cout<<" Enter 2nd value for Modulo of int Datatype : ";
			cin>>b;
			ans=a%b;
			cout<<" \n Modulo of Number 1 and Number 2 is : "<<ans;
		}
};
int main()
{
	calculater cal;
	int choice;
	cout<<" Enter 1 for Addition \n Enter 2 for Subtraction \n Enter 3 for Multiplication \n Enter 4 for Divison \n Enter 5 for Modulo : ";
	cin>>choice;

	switch(choice)
	{
		case 1:
			cal.result();
		break;
		
		case 2:
			int x,y;
			cout<<" Enter the Number 1 for Subtraction : ";
			cin>>x;
			
			cout<<" Enter the Number 2 for Subtraction : ";
			cin>>y;
			
			cal.result(x,y);
		break;
				
		case 3:
			double c,d;
			cout<<" Enter the Number 1 for Multiplication : ";
			cin>>c;
			
			cout<<" Enter the Number 2 for Multiplication : ";
			cin>>d;
			
			cal.result(c,d);
		break;
		
		case 4:
			double e;
			cout<<" Enter the Number 1 for Divison : ";
			cin>>e;
			
			cal.result(e);
		break;
		
		case 5:
			int f;
			cout<<" Enter the Number 1 for Modulo : ";
			cin>>f;
			
			cal.result(f);					
	}
}
