#include<iostream>
using namespace std;
main()
{
	int arr1[10];
	int arr2[10];
	int arr3[10];
	int i;
	
	for(i=0;i<2;i++)
	{
		cout<<"Enter a Number "<<i+1<<" : ";
		cin>>arr1[i];
}
	cout<<"Enter array 2 elements:";
	for(i=0;i<2;i++)
	{
		
		cout<<"\nEnter a Number "<<i+1<<" : ";
		cin>>arr2[i];
	}
	
	for(i=0;i<2;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
	for(i=0;i<2;i++)
	{
		cout<<"\n Addtion = "<<arr3[i];
	}
}
