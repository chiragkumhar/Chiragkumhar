#include<iostream>
using namespace std;
main()
{
	int num,i,f=1;
	cout<<"Enter a Number : ";
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	cout<<"The Factorial of given Number is "<<f;
}
