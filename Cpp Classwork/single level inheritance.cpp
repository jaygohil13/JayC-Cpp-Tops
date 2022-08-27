#include<iostream>

using namespace std;

class A{
	public:
		int a;
		void getA()
		{
			cout<<"Enter A :"<<endl;
			cin>>a;
		}
		
		void showA()
		{
			cout<<"A = "<<a<<endl;
		}
};

class B:public A{
	public:
		int b;
		
		void getB()
		{
			cout<<"Enter B:"<<endl;
			cin>>b;
		}
		void showB()
		{
			cout<<b;
		}
};
int main()
{
	B b;
	b.getA();
	b.getB();
	b.showA();
    b.showB();
	
	return 0; 
}