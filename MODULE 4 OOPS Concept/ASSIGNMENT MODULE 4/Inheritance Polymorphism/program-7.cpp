//7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance 
#include<iostream> 
using namespace std; 
class Number1
{ 
	protected:
		int n1;
	public: 
		Number1() 
		{ 
			cout<<" Enter the Value of Number 1 : ";
			cin>>n1;
		} 
}; 
class Number2 : public Number1
{ 
	protected:
		int n2;
		
	public: 
		Number2() 
		{ 
			cout<<" Enter the Value of Number 2 : ";
			cin>>n2;
		} 
}; 
class Addition: public Number2 
{ 
	public: 
	Addition()
		{ 
			cout<<" Addition of Number 1 and Number 2 is : "<<n1+n2<<endl;
		} 
}; 
int main() 
{ 
	Addition add; 
	return 0; 
}

