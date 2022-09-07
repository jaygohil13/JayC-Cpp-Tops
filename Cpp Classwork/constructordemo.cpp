#include<iostream>

using namespace std;

class box{
	public:
	
	double width,height,depth;
	
	box()
	{
		cout<<"Default Constructor Called :"<<endl;
		width = 10;
		height = 5;
		depth = 3;
	}
	box (double w,double h,double d)
	{
		cout<<"Parameterized Constructor Called :"<<endl;
		width = w;
		height = h;
		depth = d;
	}
	
	box(const box &obj)
	{
		cout<<"Copy Constructor Called :"<<endl;
		width = obj.width;
		height = obj.height;
		depth = obj.depth;
	}
	void volume()
    {
		cout<<"Volume = "<<(width*height*depth)<<endl<<endl<<endl;
	}
};

int main()
{
	box b1; //Default Constructor Called.
	b1.volume();
	box b2(4,6,8);//Parameterized Constructor Called.
    b2.volume();
	box b3(b2);//Copy Constructor Called.
	b3.volume();
	
	return 0;
}