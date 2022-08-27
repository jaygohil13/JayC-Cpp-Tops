#include<iostream>

using namespace std;

class Distance{
	public:
		double feet,inches;
		
		Distance (double f,double i)
		{
			feet = f;
			inches = i;
		}
		Distance operator-()
		{
			feet = -feet;
			inches = -inches;
			return Distance(feet,inches);
		}
		
		void display()
		{
			cout<<"\nFeet = "<<feet<<"\ninches = "<<inches;
		}
		
};

int main()
{
	Distance D1(-4,-5);
	-D1;
	Distance D2(9,-7);
	-D2;
	D1.display();
	D2.display();
	
	return 0;
}