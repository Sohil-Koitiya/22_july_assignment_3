#include<iostream>

using namespace std;

class datamember
{
	public:
		string name_of_depositor;
		int account_number;
		string type_of_account;
		int balance_in_account;
		int withdrawl_amount;
		
		void inputdata()
		{
			cout<<"Enter Name of Depositor : ";
			cin>>name_of_depositor;
			cout<<"\nEnter Account Number : ";
			cin>>account_number;
			cout<<"\nEnter Type Of Account : ";
			cin>>type_of_account;
			cout<<"\nEnter Balance in Account : ";
			cin>>balance_in_account;
			cout<<"\nEnter Withdrawl Amount : ";
			cin>>withdrawl_amount;	
		}
};

class memberfunction : public datamember
{
	public:
		void displaydata()
		{
			cout<<"\nName of depositor : "<<name_of_depositor;
			cout<<"\nAccount Number : "<<account_number;
			cout<<"\nType of Account : "<<type_of_account;
			cout<<"\nBalance in Account : "<<balance_in_account-withdrawl_amount;
		}
};

main()
{
	memberfunction s1;
	s1.inputdata();
	s1.displaydata();
}
