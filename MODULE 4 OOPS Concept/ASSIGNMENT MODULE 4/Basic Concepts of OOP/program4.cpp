//4. Write a C++ program to implement a class called Circle that has private member variables for radius.
//Include member functions to calculate the circle's area and circumference.

#include<iostream>
using namespace std;

class Circle
{
	float radius,area,circumfrence;
	public:
		void get_data()
		{
			cout<<"Enter the Radius : ";
			cin>>radius;
		}
		void Area()
		{
			  area=3.14*radius*radius;
			  cout<<" The Area of Circle is : "<<area;
		}
		void Circumfrence()
		{
			 circumfrence=2*3.14*radius;
			 cout<<"\n The Circumfrence of Circle is : "<<circumfrence;
		}
};
main()
{
	Circle cr;
	cr.get_data();
	cr.Area();
	cr.Circumfrence();
}
