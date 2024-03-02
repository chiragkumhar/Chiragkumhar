//1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
// Data member of batsman. Total runs,Average runs and best performance. 
// Member functions input data, calculate average runs,Display data.(Single Inheritance)

#include<iostream>
using namespace std;
class Cricketer
{
        protected:
		 int run,average_run;		 	
};
class Batsman:public Cricketer
{
	public:
		void get()
		{
			cout<<" Enter the Total Runs : ";
			cin>>run;
			
			average_run=run/100;
			cout<<" Average Run is : "<<average_run;
			cout<<" \nBest Performance ";
		}
};
int main()
{
	Batsman bat;
	bat.get();
	return 0;
}
