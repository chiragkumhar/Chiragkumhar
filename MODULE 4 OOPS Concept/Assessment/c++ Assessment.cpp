#include<iostream>
using namespace std;
class Event
{
	// Data Members 
	string event_name,f_name,l_name; 
	int guest_no,minutes,servers,cost1,cost2;
	float CostPerHour=18.50,CostPerMinute=.40,CostOfDinner=20.70;
	float Total_Food_Cost,Cost_For_One_Server,Average_Cost,Total_Cost,Deposit_Amount;

		
	public:
		
//Member Function for Customer's Data.
		void get_data()
		{
			cout<<"\t\t\t\t----------> Event Managemant System <----------"<<endl;
			
			cout<<"\n Enter the Name of the Event : ";
			cin>>event_name;
			
			cout<<" Enter Your First and Last Name : ";
			cin>>f_name>>l_name;
			
			cout<<" Enter the Number of Guests : ";
			cin>>guest_no;
			
			cout<<" Enter the Number of Minutes in the Event : ";
			cin>>minutes;
			
			cout<<"\n\t\t\t\t----------> Event Estimate for : "<<f_name<<l_name<<"<----------";
		}
		
//Member Function for Number of Servers .
		void number_of_servers()
		{
			if(guest_no<20)
			{
				servers=1;
					cout<<"\n\n Number of Servers Required : "<<servers<<endl;
			}
			else
			{
				servers=guest_no/20;
				cout<<"\n\n Number of Servers Required : "<<servers<<endl;
			}
		}
		
//Member Function for One Servers Cost.
		void server_cost()
		{
			cost1=(minutes/60)*CostPerHour;
			cost2=(minutes%60)*CostPerMinute;
			Cost_For_One_Server=cost1+cost2;
			cout<<" Cost for One Server is : "<<Cost_For_One_Server<<endl;	
		}
		
//Member Function for FoodCost.
		void food_cost()
		{
			Total_Food_Cost=guest_no*CostOfDinner;
			cout<<" Total Cost of Food is : "<<Total_Food_Cost<<endl;
		}
		
//Member Function for Average Cost Per Person.
		void average_cost()
		{
			Average_Cost = Total_Food_Cost/ guest_no;
			cout<<" Average Cost Per Person is : "<<Average_Cost<<endl;
		}
		
//Member Function for Total Cost.
		void total_cost()
		{
			Total_Cost = Total_Food_Cost+(Cost_For_One_Server*guest_no);
			cout<<" \nTotal Cost for the Event is : "<<Total_Cost<<endl;
		}
		
//Member Fuction for Minimum Deposit.
		void deposit()
		{
			cout<<" Please Deposite a 25% Deposit to Reverse the Event "<<endl;
			Deposit_Amount = Total_Cost*.25;
			cout<<" Deposite Amount is : "<<Deposit_Amount<<endl;
		}			
};
int main()
{
//Calling All the Member Functions.
	Event ev;
	ev.get_data();
	ev.number_of_servers();	
	ev.server_cost();
	ev.food_cost();
	ev.average_cost();
	ev.total_cost();
	ev.deposit();
	return 0;
}
