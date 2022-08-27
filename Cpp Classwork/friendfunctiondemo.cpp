#include<iostream>

using namespace std;

class Ashish{
	private:
		int money;
		friend int jay(Ashish);
		public:
			Ashish()
			{
				money = 0;
			}
};
int Jay(Ashish a)
{
	a.money = 10000;
	return a.money;
}
 


int main()
{
	Ashish a1;
	cout<<"Money Given :"<<jay(a1);
	return 0;
}