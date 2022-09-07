#include<iostream> 
using namespace std;

class ACCOUNT
{
	public:
		
		string name,bn;
		long long ano,mo;
		
		ACCOUNT()
		{
			bn = "State Bank Of India";
			name = "Jay Gohil";
			mo = 6359308867; 
			ano = 9106880213;
		}
			void detail()
		{
			cout<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			cout<<"      ACCOUNT OWNER INFORMATION"<<endl<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl<<endl;
			
			cout<<"-> Bank Name    : "<<bn<<endl<<endl;
			cout<<"-> Name         : "<<name<<endl<<endl;
			cout<<"-> Mobile No    : "<<mo<<endl<<endl;
			cout<<"-> Account No   : "<<ano<<endl<<endl;
		}
};

class SAVING
{
	public:
		
		long long bb,dt,cbb,si,cbbi,wd;
		
		SAVING()
		{
			bb = 200000;
			
			cout<<endl;
			cout<<"-> Bank Balance : "<<bb<<endl<<endl<<endl;
		}
		
		void deposit()
		{
			cout<<"Check Book Not Available For Saving Account."<<endl<<endl<<endl;
			
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
        	cout<<"                DEPOSIT"<<endl<<endl;
        	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl<<endl;
	
			cout<<"How Much Amount DO You Want To Deposit : ";
			cin>>dt;
			
			cout<<endl;
			cbb = bb+dt;
			si =(cbb*2.5*3)/100;
			cout<<"Your 3 Year Interest is : "<<si<<endl<<endl;
			
			cbbi = cbb+si;
			cout<<"Your Current Bank Balance With Interest is : "<<cbbi<<endl<<endl<<endl;
		}
		
		void withdraw()
		{
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
        	cout<<"            WITHDRAW"<<endl<<endl;
        	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl<<endl;
	
			cout<<"How Much Amount Do You Want To Withdraw : ";
			cin>>wd;
			cout<<endl;
			
			if(cbbi < wd)
			{
				cout<<"-------------------------------------"<<endl;
				cout<<"Your Account Balance Is Insuffcient"<<endl;
				cout<<"-------------------------------------"<<endl;
			}
			else
			{
			   cout<<"Your Amount Withdraw Is Successfully."<<endl<<endl;
			   cout<<"-------------------------------------------------------------"<<endl;
			   cout<<"Dear Jay Gohil Your Current Bank Balance is : "<<(cbbi-wd)<<endl;
			   cout<<"-------------------------------------------------------------"<<endl;
		    }
		}
};

class CURRENT
{
	public:
		
		long long mb,balance,deposit,curbal,withdraw,lcbbs,charge;
		
		CURRENT()
		{
			mb=10000;
			balance=200000;
			
			cout<<endl;
			cout<<"-> Bank Balance : "<<balance<<endl<<endl<<endl;
			cout<<"1) In Your Current Account Must Be Atlist "<<mb<<"."<<endl<<endl;
			cout<<"2) No Interest Is Paid On The Current Account."<<endl<<endl;
			cout<<"3) Available If You Need A Check Book."<<endl<<endl<<endl;
		}
		
		void depositc()
		{
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
        	cout<<"                DEPOSIT"<<endl<<endl;
        	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl<<endl;
	
			cout<<"How Much Amount DO You Want To Deposit : ";
			cin>>deposit;
			curbal = balance+deposit;
			cout<<endl;
			cout<<"Your Current Bank Balance is : "<<curbal<<endl<<endl<<endl;
	    }
	    
	    void withdrawc()
	    {
	    	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
	        cout<<"               WITHDRAW"<<endl<<endl;
        	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl<<endl;
	
			cout<<"How Much Amount Do You Want To Withdraw : ";
			cin>>withdraw;
			cout<<endl;
			lcbbs = curbal - withdraw;
	
			if(curbal < withdraw)
			{
				cout<<"-------------------------------------"<<endl;
				cout<<"Your Account Balance Is Insuffcient"<<endl;
				cout<<"-------------------------------------"<<endl;
			}
			else
			{
			   cout<<"Your Amount Withdraw Is Successfully."<<endl<<endl;
			   cout<<"Your Current Bank Balance Is : "<<lcbbs<<endl<<endl;
			     if(lcbbs<10000)
		         {
		             charge = lcbbs-1000;
		             cout<<endl;
		             cout<<"Since Your Account Balance Is Less Than 10000\n\nYou Will Have To Pay A Penalty Of 1000."<<endl<<endl;
		             cout<<"-------------------------------------------------------------"<<endl;
			         cout<<"Dear Jay Gohil Your Current Bank Balance is : "<<charge<<endl;
			         cout<<"-------------------------------------------------------------"<<endl;
			      }
		    }
		}
};

int main()
{
	int choice;
	
	ACCOUNT a;
	a.detail();
	
	cout<<"Account Type = (1) saving , (2) current"<<endl<<endl;
	cout<<"Please Enter Your Choice 1 & 2 : ";
	cin>>choice;
	
	if(choice == 1)
	{
		SAVING s;
		s.deposit();
		s.withdraw();
	}
    else if (choice == 2)
	{
		CURRENT c;
		c.depositc();
		c.withdrawc();
	}
	else
	{
		cout<<endl;
		cout<<"Please Enter A Valid Choice.";
	}	
	return 0;
}