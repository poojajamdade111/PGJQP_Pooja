/****9.WAP to check the inequality if two numbers.***/
#include<iostream>
using namespace std;
class Inequality
{
	public:
		void check_inequality(int num1,int num2)  //function defination
		{
			if(num1 ^ num2)
			{
				cout<<"Numbers are not equal"<<endl;
			}
			else
			{
				cout<<"Numbers are equal"<<endl;
			}
			
		}
};
int main()
{
	Inequality ie;
	int num1,num2;
	cout<<"Enter Two Number:"<<endl;
	cin>>num1>>num2;
	ie.check_inequality(num1,num2);       //passing value to fuction
}
