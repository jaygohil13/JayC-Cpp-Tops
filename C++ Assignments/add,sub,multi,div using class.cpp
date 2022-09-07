#include<iostream>

using namespace std;

class A{
	public:
		int a,b,add,sub,multi;
		float div;
		
		void accept()
		{
			cout<<"Enter A :";
			cin>>a;
			cout<<endl;
			
			cout<<"Enter B :";
			cin>>b;
			cout<<endl;
			cout<<"A = "<<a<<"\tB = "<<b;
		}
		void addition()
		{
			cout<<endl<<endl;
			add = a + b;
			cout<<"Addition = "<<add;
		}
		void subtraction()
		{
			cout<<endl<<endl;
			sub = a - b;
			cout<<"Subtraction = "<<sub;
		}
		void multiplication()
		{
			cout<<endl<<endl;
			multi = a * b;
			cout<<"multiplication = "<<multi;
		}
		void division()
		{
			cout<<endl<<endl;
			div = a / (float)  b;
			cout<<"division = "<<div;
		}
};

int main()
{
	A a1;
	a1.accept();
	a1.addition();
	a1.subtraction();
	a1.multiplication();
	a1.division();
	
	return 0;
}