#include<iostream>

using namespace std;

class base{
	public:
		
		virtual void show()
		{
			cout<<"show from base class"<<endl;
		}
};

class derived:public base{
	public:
		void show()
		{
			cout<<"show from derived class"<<endl;
		}
};
int main()
{
	base * b =new derived();
	b->show();
	
	return 0;
}
