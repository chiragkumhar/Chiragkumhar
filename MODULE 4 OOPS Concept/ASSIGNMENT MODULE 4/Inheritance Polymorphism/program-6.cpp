//6. Write a C++ Program to show access to Private Public and Protected using Inheritance

// 1.C++ Program to find Area of Rectangle using protected Data Member(variable).

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

//********************************************************************************************************************************************

//2.C++ Program to find Area of Rectangle using Private Data Member(variable).

//#include<iostream>
//using namespace std;
//class Area
//{
//	float width,lenght,area;
//};
//class Rectangle : public Area
//{
//	public:
//		void get_data()
//		{
//			cout<<"Enter the Width of Rectangle : ";
//			cin>>width;
//			
//			cout<<"Enter the Lenght of Rectangle : ";
//			cin>>lenght;
//		}
//		void display_data()
//		{
//			area=width*lenght;
//			cout<<"Area of Rectangle is : "<<area;
//		}	
//};
//main()
//{
//	Rectangle Rec;
//	Rec.get_data();
//	Rec.display_data();
//}

// -----> Note : IT WILL GIVE AN ERROR BECAUSE USING PRIVATE DATA MEMBER WE CANT NOT INHERIT THE CLASS.

//********************************************************************************************************************************************

//3.C++ Program to find Area of Rectangle using public Data Member(variable).

//#include<iostream>
//using namespace std;
//class Area
//{
//	public:
//	float width,lenght,area;
//};
//class Rectangle : public Area
//{
//	public:
//		void get_data()
//		{
//			cout<<"Enter the Width of Rectangle : ";
//			cin>>width;
//			
//			cout<<"Enter the Lenght of Rectangle : ";
//			cin>>lenght;
//		}
//		void display_data()
//		{
//			area=width*lenght;
//			cout<<"Area of Rectangle is : "<<area;
//		}	
//};
//main()
//{
//	Rectangle Rec;
//	Rec.get_data();
//	Rec.display_data();
//}
