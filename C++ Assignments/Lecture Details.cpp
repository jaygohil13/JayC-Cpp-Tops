#include<iostream>
using namespace std;

class lecture{
	public:
		string lname1,sub1,course1,lname2,sub2,course2,lname3,sub3,course3,lname4,sub4,course4,lname5,sub5,course5;
		int number1,number2,number3,number4,number5;	
		void lecdetail()
		{
			cout<<endl;
			cout<<"*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*"<<endl<<endl;
			cout<<"LECTURE DETAILS"<<endl<<endl;
			cout<<"*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*";
			cout<<endl;
			cout<<endl;
			cout<<"Number Of Lecture : ";
			cin>>number1;
			cout<<endl;
			cout<<"Enter The Lecturer Name : ";
			cin>>lname1;
			cout<<endl;
			cout<<"Enter The Subject Name : ";
			cin>>sub1;
			cout<<endl;
			cout<<"Enter The Course Name  : ";
			cin>>course1;
			cout<<endl<<endl;
			cout<<"======================================";
			
	    	cout<<endl<<endl;
			cout<<endl;
			cout<<"Number Of Lecture      : ";
			cin>>number2;
			cout<<endl;
			cout<<"Enter The Lecturer Name : ";
			cin>>lname2;
			cout<<endl;
			cout<<"Enter The Subject Name : ";
			cin>>sub2;
			cout<<endl;
			cout<<"Enter The Course Name  : ";
			cin>>course2;
			cout<<endl<<endl;
			cout<<"======================================";
			cout<<endl<<endl;
			cout<<endl;
			cout<<"Number Of Lecture      : ";
			cin>>number3;
			cout<<endl;
			cout<<"Enter The Lecturer Name : ";
			cin>>lname3;
			cout<<endl;
			cout<<"Enter The Subject Name : ";
			cin>>sub3;
			cout<<endl;
			cout<<"Enter The Course Name  : ";
			cin>>course3;
			cout<<endl<<endl;
			cout<<"======================================";
			
			cout<<endl<<endl;
			cout<<endl;
			cout<<"Number Of Lecture      : ";
			cin>>number4;
			cout<<endl;
			cout<<"Enter The Lecturer Name : ";
			cin>>lname4;
			cout<<endl;
			cout<<"Enter The Subject Name : ";
			cin>>sub4;
			cout<<endl;
			cout<<"Enter The Course Name  : ";
			cin>>course4;
			cout<<endl<<endl;
			cout<<"======================================";
			
			cout<<endl<<endl;
			cout<<endl;
			cout<<"Number Of Lecture      : ";
			cin>>number5;
			cout<<endl;
			cout<<"Enter The Lecturer Name : ";
			cin>>lname5;
			cout<<endl;
			cout<<"Enter The Subject Name : ";
			cin>>sub5;
			cout<<endl;
			cout<<"Enter The Course Name  : ";
			cin>>course5;
			cout<<endl<<endl;
			
				
		}
		
		void print()
		{
			
			cout<<"*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*"<<endl<<endl;
			cout<<"         LECTURE DETAILS ARE"<<endl<<endl;
			cout<<"*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*";
			
			cout<<endl<<endl;
			cout<<"Lecture Number : "<<number1<<endl<<endl;
			cout<<"Lecturer Name   : "<<lname1<<endl<<endl;
			cout<<"Subject Name   : "<<sub1<<endl<<endl;
			cout<<"Course  Name   : "<<course1<<endl<<endl;
			cout<<"--------------------------------------"<<endl;
			cout<<endl;
			cout<<"Lecture Number : "<<number2<<endl<<endl;
			cout<<"Lecturer Name   : "<<lname2<<endl<<endl;
			cout<<"Subject Name   : "<<sub2<<endl<<endl;
			cout<<"Course  Name   : "<<course2<<endl<<endl;
			
			cout<<"--------------------------------------"<<endl;
			
			cout<<endl;	
			cout<<"Lecture Number : "<<number3<<endl<<endl;
			cout<<"Lecturer Name   : "<<lname3<<endl<<endl;
			cout<<"Subject Name   : "<<sub3<<endl<<endl;
			cout<<"Course  Name   : "<<course3<<endl<<endl;
			
			cout<<"--------------------------------------"<<endl;
			
			cout<<endl;
			cout<<"Lecture Number : "<<number4<<endl<<endl;
			cout<<"Lecturer Name   : "<<lname4<<endl<<endl;
			cout<<"Subject Name   : "<<sub4<<endl<<endl;
			cout<<"Course  Name   : "<<course4<<endl<<endl;
			
			cout<<"--------------------------------------"<<endl;
		
		    cout<<endl;
		    cout<<"Lecture Number : "<<number5<<endl<<endl;
			cout<<"Lecturer Name   : "<<lname5<<endl<<endl;
			cout<<"Subject Name   : "<<sub5<<endl<<endl;
			cout<<"Course  Name   : "<<course5<<endl<<endl;
			
			cout<<"--------------------------------------"<<endl;
		}
};

int main()
{
	lecture l1;
	l1.lecdetail();
	l1.print();
	
	
	return 0;
}