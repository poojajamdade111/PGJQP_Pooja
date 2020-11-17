/***6.WAP to find the greater of three numbers***/
#include<iostream>
using namespace std;
class CheckGreaterNum
{
	public:
		void check_greaternum(int num1,int num2,int num3)  //function defination
		{
			if(num1>num2&&num1>num3)
			{
				cout<<num1<<" is Greater"<<endl;
			}
			else if(num2>num1&&num2>num3)
			{
				cout<<num2<<" is Greater"<<endl;
			}
			else
			{
				cout<<num3<<" is Greater"<<endl;
			}
		}
};
int main()
{
	CheckGreaterNum en;
	int num1,num2,num3;
	cout<<"Enter Three Number:"<<endl;
	cin>>num1>>num2>>num3;
	en.check_greaternum(num1,num2,num3);   //passing value to fuction
}
