//4. Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. 
//Include member functions to deposit and withdraw money from the account.

#include<iostream>
using namespace std;
class Bank
{
	int account_number,balance,deposit,withdraw;
	public:
		void get_data()
		{
			cout<<"Enter the Account Number : ";
			cin>>account_number;
			
			cout<<"Enter the Balance Ammount : ";
			cin>>balance;
		}
		void Deposit()
		{
			cout<<"Enter the Ammount You want to Deposit : ";
			cin>>deposit;
			
			cout<<"\n Ammount You are Deposited : "<<deposit;
			cout<<"\n Balance Before Diposite : "<<balance;
			cout<<"\n Balance After Deposite : "<<deposit+balance;
		}
		void Withdraw()
		{
			cout<<"\n\n Enter the Ammount You want to Withdraw : ";
			cin>>withdraw;
			
			cout<<"\n Ammount You want to Withdraw : "<<withdraw;
			cout<<"\n Balance Before Withdraw : "<<deposit+balance;
			cout<<"\n Balance After Withdraw : "<<(balance+deposit)-withdraw;
		}
};
main()
{
	Bank ba;
	ba.get_data();
	ba.Deposit();
	ba.Withdraw();
}
