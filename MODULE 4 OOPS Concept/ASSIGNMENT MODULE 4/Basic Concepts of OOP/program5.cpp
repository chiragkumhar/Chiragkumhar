//5. Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
//Implement member functions to calculate the rectangle's area and perimeter

#include<iostream>
using namespace std;
class Rectangle
{
	int lenght,width,area,perimeter;
	public:
		void get_data()
		{
			cout<<"Enter the Lenght of Rectangle : ";
			cin>>lenght;
			
			cout<<"Enter the Width of Rectangle : ";
			cin>>width;
		}
		void Area()
		{
			area=lenght*width;
			cout<<" The Area of Rectangle is : "<<area;
		}
		
		void Perimeter()
		{
			perimeter=(lenght+width)*2;
			cout<<"\n The Perimeter of Rectangle is : "<<perimeter;
		}
};
main()
{
	Rectangle rec;
	rec.get_data();
	rec.Area();
	rec.Perimeter();
}
