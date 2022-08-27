#include<iostream>

using namespace std;

class Demo{
	public:
		string name;
		
		void getName()
		{
			cout<<"Enter name :";
			cin>>name;
		}
		
		void showName()
		{
			cout<<"Your Name :"<<name;
		}
};

int main()
{
	Demo n;
	n.getName();
	n.showName();
	
	return 0;
}