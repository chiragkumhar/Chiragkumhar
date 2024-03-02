//2. Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;
class Area
{
	protected:
		float width,lenght,area;
};
class Rectangle : public Area
{
	public:
		void get_data()
		{
			cout<<"Enter the Width of Rectangle : ";
			cin>>width;
			
			cout<<"Enter the Lenght of Rectangle : ";
			cin>>lenght;
		}
		void display_data()
		{
			area=width*lenght;
			cout<<"Area of Rectangle is : "<<area;
		}	
};
main()
{
	Rectangle Rec;
	Rec.get_data();
	Rec.display_data();
}
