/****5.WAP to find the greater of two numbers****/
#include<iostream>
using namespace std;
class GreaterNum
{	
	public:
		void check_greaternum(int num1,int num2)  //function defination
		{
			if(num1>num2)
			{
				cout<<num1<<" is grater than "<<num2;
			}
			else
			{
				cout<<num2<<" is grater than "<<num1;
			}
		}
};
int main()
{
	GreaterNum en;
	int num1,num2;
	cout<<"Enter Two Number:"<<endl;
	cin>>num1>>num2;
	en.check_greaternum(num1,num2);   //passing value to fuction
}
