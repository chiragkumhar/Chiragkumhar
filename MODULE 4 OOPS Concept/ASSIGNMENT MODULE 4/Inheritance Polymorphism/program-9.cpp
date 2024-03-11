//9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;
class addition{
	int array[3];
	int i;
	public:
		void get()
		{
			cout<<" Enter 3 values : ";
			for(i=0;i<3;i++)
			{
				cin>>array[i];
			}
		}
		void display()
		{
			cout<<"The Given Value are : "<<endl;
			for(i=0;i<3;i++)
			{
				cout<<array[i]<<" \t";
			}
			
		}
		addition operator +(addition obj)
		{
			int result[3];
			int i;
			for(i=0;i<3;i++)
			{
				result[i]=array[i]+obj.array[i];
			}
			cout<<" \nResult Array is : "<<endl;
			for(i=0;i<3;i++)
			{
				cout<<"\t"<<result[i];
			}
		}
};
int main()
{
	addition obj1,obj2;
	cout<<" Enter 1st Object value \n ";
	obj1.get();
	obj1.display();
	cout<<" \n Enter 2nd Object value "<<endl;
	obj2.get();
	obj2.display();
	obj1+obj2;
	return 0;
}
