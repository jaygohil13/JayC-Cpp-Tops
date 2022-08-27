#include<iostream>

using namespace std;

class base{
	public:
		void display1()
		{
			cout<<"Non pure virtual function in base class"<<endl;
		}
		virtual void display2();
};
class derived :public base{
	public:
	void display2()
	{
		cout<<"Function implemented in derived class"<<endl;
	}
};

int main()
{
	derived d;
	d.display1();
	d.display2();
	
	return 0;
}