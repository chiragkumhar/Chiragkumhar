//2. Define a class to represent a bank account. Include the following members:
//Data Member :

//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account

//Member Functions :

//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance

#include<iostream>
using namespace std;
class Bank
{
		string depositer_name;
		int account_num;
		string acc_type;
		float Balance;
		float Deposite_Amout;
		float Withdraw;
		char choice;
	
	public:
	void To_assign_values()
		{
			cout<<"Enter the Depositer Name : ";
			cin>>depositer_name;
			
			cout<<"Enter the Account Number : ";
			cin>>account_num;
			
			cout<<"Enter the Account Type : ";
			cin>>acc_type;
			
			cout<<"Enter Balance : ";
			cin>>Balance;
			
			cout<<"\n The Depositer Name : "<<depositer_name;
			cout<<"\n The Account Number : "<<account_num;
			cout<<"\n The Account Type : "<<acc_type;
			cout<<"\n Balance Amount in the Account : "<<Balance;
			
			cout<<"\n***********************************************************************************************************************";
		}
		
		void To_deposited_an_amount()
		{
			
			cout<<"\n Enter the Amount that you want to Deposite : ";
			cin>>Deposite_Amout;
			
			cout<<"\n The Depositer Name : "<<depositer_name;
			cout<<"\n The Account Number : "<<account_num;
			cout<<"\n The Account Type : "<<acc_type;
			cout<<"\n Deposited Amount in the Account : "<<Deposite_Amout;
			cout<<"\n Balance Amount in the Account : "<<Balance+Deposite_Amout;
			
			cout<<"\n ***********************************************************************************************************************";
			
		}
		
		void To_withdraw_an_amount_after_checking_balance()
		{
			
			cout<<"\n Enter the Amount You want to Withdraw : ";
			cin>>Withdraw;
			
			cout<<"\n The Amount You want to Withdraw : "<<Withdraw;
			cout<<"\n Balance Amount in the Account : "<<(Balance+Deposite_Amout)-Withdraw;
			
			cout<<"\n ***********************************************************************************************************************";	
		}
		
		void To_display_name_and_balance()
		{
			
			cout<<"\n The Depositer Name : "<<depositer_name;
			cout<<"\n Balance Amount in the Account : "<<(Balance+Deposite_Amout)-Withdraw;
		}	
};
main()
{
	Bank bk;
	bk.To_assign_values();
	char choice;
	do
	{	
		cout<<"\n Press 1 for Deposite an Amount";
		cout<<"\n Press 2 for Withdraw Amount ";
		cout<<"\n Press 3 for Check Name & Balance";
		cout<<"\n Enter your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case '1':
				 bk.To_deposited_an_amount();
				 break;
				 
		   case '2':
		   	     bk.To_withdraw_an_amount_after_checking_balance();
		   	     break;
		   	     
		    case '3':
		    	bk.To_display_name_and_balance();
		    	break;
		    	
		    default:
		    	cout<<"Kindly Enter Valid Choice ";
		}
			cout<<"\n Do you want to Continue? : ";
			cin>>choice;
	}
while(choice=='y');

}

