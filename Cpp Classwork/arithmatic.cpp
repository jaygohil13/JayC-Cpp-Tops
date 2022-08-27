#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"Enter A :";
	cin>>a;
	
	cout<<"Enter B :";
	cin>>b;
	
	int choice;
	cout<<"\n********Arithmetic Operation********"<<endl;
	
	cout<<"press 1.Addition\npress 2.Subtraction\npress 3.Multiplication\npress 4.Division"<<endl;
	
	cout<<"Enter choice :";
	
	cin>>choice;
	
	cout<<"\nA = "<<a<<",\tB = "<<b<<endl<<endl;;
	
	cout<<"===================="<<endl;
	switch(choice)
	{
		case 1:cout<<"\nAddition = "<<(a+b)<<endl;
		break;
		case 2:cout<<"\nSubtraction = "<<(a-b)<<endl;
		break;
		case 3:cout<<"\nMultiplication = "<<(a*b)<<endl;
		break;
		case 4:cout<<"\nDivision = "<<((float)a/b)<<endl;
		break;
		default:cout<<"Invalid choice"<<endl;
	}
	
}