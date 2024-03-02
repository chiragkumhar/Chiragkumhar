//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template <typename S>

void Swap(S n1,S n2)
{
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	cout<<" \n-----> After Swaping <----- "<<endl;
	cout<<" The Value of Number 1 is : "<<n1<<endl;
	cout<<" The Value of Number 2 is : "<<n2<<endl;
}

main()
{
	Swap<int>(10,20);

}
