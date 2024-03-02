//13.Write a program to find the max number from given two numbersusing friend function

#include<iostream>
using namespace std;
class Max
{
	int n1,n2;
	public:
		void get_value()
		{
			cout<<" Enter the Value of Number 1 : ";
			cin>>n1;
			
			cout<<" Enter the Value of Number 2 : ";
			cin>>n2;
		}
	
		friend void max_number(Max);
};
void max_number(Max ma)
{
	if(ma.n1>ma.n2)
	{
		cout<<" Number 1 is Big ";
	}
	else
	{
		cout<<" Number 2 is Big ";
	}
}
int main()
{
	Max mx;
	mx.get_value();
	max_number(mx);
}
