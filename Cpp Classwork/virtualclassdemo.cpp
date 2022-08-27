#include<iostream>

using namespace std;

class A{
	public:
		void msg()
		{
			cout<<"Hello Msg from A";
		}
};

class B:virtual public A{
	
};

class C:virtual public B{
	
};

class D:public B,public C{
	
};

int main()
{
	D d;
	d.msg();
	
	return 0;
}

/*

DDOD :Deadly Diamond of Death.

*/