#include<iostream>
using namespace std;

class BA
{
	public:
		string name,at;
		long long an;
	
		BA(string name,string at,long long an)
		{
			this->name = name;
			this->at = at;
			this->an = an;
		}
		
		void displayName()
		{
			cout<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			cout<<"      Account Owner Information"<<endl<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl<<endl;
			cout<<"Depositor Name : "<<name<<endl<<endl;
			cout<<"Account Type   : "<<at<<endl<<endl;
			cout<<"Account No     : "<<an<<endl<<endl<<endl;
			cout<<"Your Current Bank Balance Is : 0"<<endl<<endl;
		}
		
		void deposited(long long am)
		{
			cout<<endl;
			
			cout<<"How Much Amount Have You To Deposit : ";
		}
		
		void withdraw(long long am)
		{
			long long wd,b;
			cout<<endl<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
	cout<<"               WITHDRAW"<<endl<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl<<endl;
	
			cout<<"How Much Amount Do You Want To Withdraw : ";
			cin>>wd;
			
			if(wd <= am)
			{
				cout<<endl<<endl;
				b = am-wd;
				cout<<"Your Amount Withdraw Is Successfully";
				cout<<endl<<endl<<endl;
				cout<<"-------------------------------------------------------------"<<endl;
		    	cout<<"Dear Jay Gohil Your Current Bank Balance Is : "<<b<<endl;
		    	cout<<"-------------------------------------------------------------"<<endl;
	    	}
		    else
			{
			   cout<<endl<<endl;
			   cout<<"-------------------------------------"<<endl;
			   cout<<"Your Account Balance Is Insuffcient :"<<endl;
			   cout<<"-------------------------------------"<<endl<<endl;
			}
	    }  
};

int main()
{
    long long amount;
	
	BA a1("Jay Gohil","Saving",330012001888);
	a1.displayName();
	
	cout<<endl<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
	cout<<"                DEPOSIT"<<endl<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
	
	
	a1.deposited(amount);
	cin>>amount;
	
	cout<<endl<<endl;
	cout<<"Your Account Balance Is : "<<amount;
	
	cout<<endl<<endl;
	a1.withdraw(amount);
	
	return 0;
}
