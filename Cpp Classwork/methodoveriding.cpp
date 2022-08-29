#include<iostream>

using namespace std;

class A{
	public:
		void show()
		{
			cout<<"Show from A"<<endl;
		}
};

class B:public A{
	public:
		void show()
		{
			cout<<"Show from B";
		}
};

int main()
{
/*	B*b = newB();
	b->show();
	return 0;
	*/
	
	
	A a;
  a.show();
	
	B b;
	b.show();
	
	return 0;
	
}