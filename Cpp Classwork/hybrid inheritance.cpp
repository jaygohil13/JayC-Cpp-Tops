#include<iostream>

using namespace std;

class mm
{
	protected:
		int rollno;
		public:
			void get_num(int a)
			{rollno = a;}
			
			void put_num()
			{cout<<"Roll Number is:"<<rollno<<"\n";}
};
class marks:public mm
{
	protected:
		int sub1;
		int sub2;
		public:
			void get_marks(int x,int y)
			{
				sub1 = x;
				sub2 = y;
			}
			void put_marks()
			{
				cout<<"subject 1:"<<sub1<<"\n";
				cout<<"subject 2:"<<sub2<<"\n";
			}
};
class extra
{
	protected:
		float e;
		public:
			
			void get_extra(float s)
			{
				e = s;
			}
			void put_extra()
			{cout<<"Extra score::"<<e<<"\n";}
};

class res:public marks,public extra{
	protected:
		float tot;
		public:
			void disp()
			{
				tot = sub1+sub2+e;
				put_num();
				put_marks();
				put_extra();
				cout<<"Total:"<<tot;
			}
};
int main()
{
	res std1;
	std1.get_num(10);
	std1.get_marks(10,20);
	std1.get_extra(33.12);
	std1.disp();
	
	return 0;
}
