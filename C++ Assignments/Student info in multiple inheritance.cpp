#include<iostream>
using namespace std;

class STUDENT{
	public:
		
		string name;
		int rollno;
		
		STUDENT()
		{
			name = "jay gohil";
			rollno = 13;
		}
};
class TEST : public STUDENT{
	public:
		
		int sub1,sub2;
		
		TEST()
		{
			sub1 = 80;
			sub2 = 89;
		}
};
class RESULT : public TEST{
	public:
		int total;
		
		RESULT()
		{
			total = sub1 + sub2;
		}
		void display()
		{
			cout<<endl;
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
			cout<<"       STUDENT INFO"<<endl<<endl;
			cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
			cout<<"Student Name :"<<name<<endl<<endl;
			cout<<"Roll No :"<<rollno<<endl<<endl;
			cout<<"Sub1 Marks :"<<sub1<<endl<<endl;
			cout<<"Sub2 Marks :"<<sub2<<endl<<endl;
			cout<<"Total Marks :"<<total<<endl<<endl;
		}
};
int main()
{
	RESULT r1;
	r1.display();
	
	return 0;
}
