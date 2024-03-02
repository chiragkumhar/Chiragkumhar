//7. Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
//Include member functions to set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;
class Date
{
	int day,year,month;
	public:
		void get_data()
		{
			cout<<"Enter the Day : ";
			cin>>day;
			
			cout<<"Enter the Month : ";
			cin>>month;
			
			cout<<"Enter the Year : ";
			cin>>year;
		}
		void set_data()
		{
			if(day<=31 && month<=12)
			{
				cout<<"Date : "<<day<<"/"<<month<<"/"<<year;
			}
			else
			{
				cout<<"\n Enter the Valid Details";
			}

		}
};
main()
{
	Date dt;
	dt.get_data();
	dt.set_data();	
	
}
