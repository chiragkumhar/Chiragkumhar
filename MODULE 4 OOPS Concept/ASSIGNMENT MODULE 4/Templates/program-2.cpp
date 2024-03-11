//2. Write a program of to sort the array using templates

#include<iostream>
using namespace std;
template <typename T>
void sort_array()
{
	T array[3],temp;
	int j;
	int i;
	
	cout<<" Enter 3 values : ";
	
	for(i=0;i<3;i++)
	{
		cin>>array[i];
	}
	
	cout<<"\n Values Before Sort : ";
	
	for(i=0;i<3;i++)
	{
		cout<<array[i];
	}
	
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	
	cout<<" \nValues After Sort : ";
	for(i=0;i<3;i++)
	{
		cout<<array[i];
	}
}
int main()
{
	sort_array<char>();
	return 0;
}
