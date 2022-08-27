#include<iostream>

using namespace std;

class A{
	public:
		int a;
		
		void getA()
		{
			cout<<"Enter A :";
			cin>>a;
		}
		void showA()
		{
			cout<<"\tA = "<<a;
		}
};

class B:public A{
	public:
		int b;
		
		void getB()
		{
			cout<<"Enter B :";
			cin>>b;
		}
		void showB()
		{
			cout<<"\tB = "<<b;
		}
};

class C:public B{
	public:
		int c;
		
		void getC()
		{
			cout<<"Enter C :";
			cin>>c;
		}
		void showC()
		{
			cout<<"\tC = "<<c;
		}
};

int main()
{
	C c;
	c.getA();
	c.getB();
	c.getC();
	
	c.showA();
	c.showB();
	c.showC();
	
	return 0;
}