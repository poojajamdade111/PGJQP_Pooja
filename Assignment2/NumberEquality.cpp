/**8.WAP to check the equality of two numbers.**/
#include<iostream>
using namespace std;
class NumberEquality
{
	public:
		void check_equality(int num1,int num2)  //function defination
		{
			if(num1==num2)
			{
				cout<<"Numbers are equal"<<endl;
			}
			else
			{
				cout<<"Numbers are not equal"<<endl;
			}
			
		}
};
int main()
{
	NumberEquality ne;
	int num1,num2;
	cout<<"Enter Two Number:"<<endl;
	cin>>num1>>num2;
	ne.check_equality(num1,num2);       //passing value to fuction
}
