#include<iostream>

using namespace std;

class MODemo{
	public:
		int add(int a)
		{
			return a;
		}
		
		int add(int a,int b)
		{
			return a + b;
		}
		int add(int a,int b,int c)
		{
			return a + b + c;
		}
		
};

int main()
{
	MODemo md;
	cout<<"Addition :"<<md.add(10,20)<<endl;
	cout<<"Addition :"<<md.add(14)<<endl;
	cout<<"Addition  :"<<md.add(10,20,5);
	
	return 0;
}