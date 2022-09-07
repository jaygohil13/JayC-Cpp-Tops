#include<iostream>

using namespace std;

class SI{
	public:
		int pa;
		float rate,year;
		
		void accept()
		{
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
			cout<<"    SIMPLE INTEREST"<<endl<<endl;
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl<<endl;
			
			cout<<"Enter Principal Amount :";
			cin>>pa;
			cout<<endl<<endl<<endl;
			
			cout<<"Enter Year :";
			cin>>year;
			cout<<endl<<endl<<endl;
			
			cout<<"Enter Rate :";
			cin>>rate;
			cout<<endl<<endl<<endl;
			
			cout<<"Simple Interest :"<<(pa * year * rate)/(float)100;
		}
};

int main()
{
	SI si;
	si.accept();
	return 0;
}