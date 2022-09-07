#include<iostream>
using namespace std;

class CRICKETER{
	public:
		
		string name,role,bs;
		int no,age,tm,tr,ave,bestscore;
		
		CRICKETER()
		{
			name = "Rohit Sharma";
			role = "Indian Team Captain";
			bs = "Right Handed Batsman";
			no = 45;
			age = 35;
		    tm = 412;
			tr = 16033;
			bestscore = 264;
			ave = tr/(float)tm;
		}
};

class BATSMAN :public CRICKETER{
	public:
		
		void Information()
		{
			cout<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"       BATSMAN DETAILS"<<endl;
			cout<<"-----------------------------"<<endl<<endl;
			
			cout<<"Batsman Name  : "<<name<<endl<<endl;
			cout<<"Role          : "<<role<<endl<<endl;
			cout<<"Batting Style : "<<bs<<endl<<endl;
			cout<<"Batsman No    : "<<no<<endl<<endl;
			cout<<"Age           : "<<age<<endl<<endl<<endl;
		}
		
		void display()
		{
			cout<<"-----------------------------"<<endl;
			cout<<"       CRICKET CAREER"<<endl;
			cout<<"-----------------------------"<<endl<<endl;
			
			cout<<"Match Played  : "<<tm<<endl<<endl;
			cout<<"Runs          : "<<tr<<endl<<endl;
			cout<<"Highest       : "<<bestscore<<endl<<endl;
			cout<<"Average       : "<<ave;
		
		}
};

int main()
{
	
	BATSMAN b1;
    b1.Information();
    b1.display();
	return 0;
}