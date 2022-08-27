#include<iostream>

using namespace std;

class student{
	public:
		
		int id;
		string name;
		
		student()
		{
			id = 100;
		}
		void getname()
		{
			cout<<"Enter Name :";
			cin>>name;
		}
};

class Extramarks{
	public:
		int sp;
		
		Extramarks()
		{
			sp = 54;
		}
};

class Result:public student,public Extramarks{
	public:
		int s1,s2,s3,total;
		float avg;
		
		Result()
		{
			s1 = 56;
			s2 = 58;
			s3 = 75;
			total = s1 + s2 + s3;
			avg = (float)total/3;
		}
		void display()
		{
			cout<<"Id:"<<id<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Sports Marks:"<<sp<<endl;
			cout<<"Total Marks:"<<total<<endl;
			cout<<"Average:"<<avg;
		}
};

int main()
{
	Result r;
	r.getname();
	r.display();
}