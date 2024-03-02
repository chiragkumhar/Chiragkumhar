// 11.Write a program to calculate the area of circle, rectangle and triangle Using Function Overloading
//Rectangle:  A=wl
//Triangle:A = 1/2 × b × h
//Circle: Pi * r * r

#include<iostream>
using namespace std;
class Shapes_Area
{
	double area;
	public:
		void Area(double w , double l)
		{
			area=w*l;
			cout<<" Area of Rectangle is : "<<area;
		}
		void Area(int  b, int h)
		{
			area=0.5*(b*h);
			cout<<" Area of Triangle is : "<<area;
		}
		void Area(double r)
		{
			area=(3.14*r*r);
			cout<<" Area of Circle is : "<<area;
		}
};
int main()
{
	Shapes_Area sa;
	int choice;
		
	cout<<" Enter 1 for Find the Area of Rectangle \n Enter 2 for Find the Area of Triangle \n Enter 3 for Find the Area of Circle : ";
	cin>>choice;
		
	switch(choice)
	{
		case 1:
			double a,b;
			cout<<"Enter the Width of Rectangle : ";
			cin>>a;
			
			cout<<"Enter the Lenght of Rectangle : ";
			cin>>b;
			
			sa.Area(a,b);
			break;
		
		case 2:
			int no1,no2;

			cout<<" Enter the Base of Triangle : ";
			cin>>no1;
				
			cout<<" Enter the Height of Triangle : ";
			cin>>no2;
			
			sa.Area(no1,no2);
			break;
			
		case 3:
			double x;
			
			cout<<"Enter the Radius of Circle : ";
			cin>>x;
			
			sa.Area(x);
			break;
			
		default:
			cout<<" Invalied Choice ";
		
	}
}
