//12.Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;
class Swap
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
		void display()
		{
			cout<<" \n-----> Before Swaping <----- "<<endl;
			cout<<" The Value of Number 1 is : "<<n1<<endl;
			cout<<" The Value of Number 2 is : "<<n2<<endl; 
		}	
		friend void swap_number(Swap);
};
void swap_number(Swap sp)
{
	sp.n1=sp.n1+sp.n2;
	sp.n2=sp.n1-sp.n2;
	sp.n1=sp.n1-sp.n2;
	
	cout<<" \n-----> After Swaping <----- "<<endl;
	cout<<" The Value of Number 1 is : "<<sp.n1<<endl;
	cout<<" The Value of Number 2 is : "<<sp.n2<<endl;
}
int main()
{
	Swap sw;
	sw.get_value();
	sw.display();
	swap_number(sw);
}
