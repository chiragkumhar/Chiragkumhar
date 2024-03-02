//1. Write a program to find the multiplication values and the cubic values using inline function 
#include<iostream>
using namespace std;
inline int mul(int x,int y)
{
	return x*y;
}
inline int cube(int a)
{
	return a*a*a; 
}
int main()
{
	cout<<"Multiplication is : "<<mul(27,9)<<endl;
	cout<<"Cubic is : "<<cube(9);
	return 0;
}
