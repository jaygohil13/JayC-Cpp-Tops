#include<iostream>

using namespace std;


class mihir{
	private:
		int num1;
		
		friend class tirth;
		
		public:
			mihir()
			{
				num1 = 60;
			}
};
class tirth{
	private:
		int num2;
		public:
			tirth()
			{
				num2 = 40;
			}
			int add()
			{
				mihir m;
				return m.num1 + num2;
			}
};
int main()
{
	tirth t;
	cout<<"Addition = "<<t.add();
	
}