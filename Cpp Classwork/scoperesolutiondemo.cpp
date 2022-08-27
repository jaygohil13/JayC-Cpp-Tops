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
	cout<<"Function Called";
}

int main()
{
	A a;
	a.func();
	
	return 0;
}
