#include<iostream>
#include<string>

using namespace std;

template <typename T>
T add(T a,T b)

{
	return a + b;
}
int main()
{
	string str;
	
	cout<<add<int>(5,7)<<endl<<endl;
	cout<<add<float>(6.3f,47.6f)<<endl<<endl;
	cout<<add<string>("jay"," kanishk")<<endl<<endl;
	cout<<"Enter your string :";
	getline(cin,str);
	
	cout<<"\nYour string with space is :"<<str;
 	
	return 0; 
}