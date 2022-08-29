/* 
:: Scope resolution operator :To access members outside the class.
*/

#include<iostream>

using namespace std;

class A{
	public:
		
		void func();
};

void A::func()
{
	cout<<"Function Called"<<endl;
}
class B{
	public:
		
		void func1();
};
void B::func1()
{
	cout<<"Function 1 Called";
}


int main()
{
	A a;
	a.func();
	B b;
	b.func1();
	
	return 0;
}
