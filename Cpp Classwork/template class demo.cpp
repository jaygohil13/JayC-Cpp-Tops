#include<iostream>

using namespace std;

template<class T>
class Number{
	public:
		T num;
		
		Number(T n)
		{
			num = n;
		}
		T getNum()
		{
			return num;
		}
};
int main()
{
	Number<int>intNum(10);
	Number<float>floatNum(12.4f);
	
	cout<<"Integer Number :"<<intNum.getNum()<<endl;
	cout<<"Float Val :"<<floatNum.getNum();
	return 0;
}