//5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
//Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;
class Triangle
{
	int s1,s2,s3;
	public:
		void get_data()
		{
			cout<<" Enter the Value of Side 1 : ";
			cin>>s1;
			
			cout<<" Enter the Value of Side 2 : ";
			cin>>s2;
			
			cout<<" Enter the Value of Side 3 : ";
			cin>>s3;
		}
		
		void display_data()
		{
			if(s1==s2 && s2==s3 && s1==s3)
			{
				cout<<" The Given Triangle is Equilateral ";
				
			}
			else if(s1==s2 || s2==s3 || s1==s3)
			{
				cout<<" The Given Triangle is Isosceles ";	
			}
			else
			{
				cout<<" The Given Triangle is Scalence ";
			}			
		}
};
int main()
{
	Triangle tri;
	tri.get_data();
	tri.display_data();
	return 0;
	
}
