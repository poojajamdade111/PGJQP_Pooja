/******13. WAP to swap two numbers*******/
#include<iostream>
using namespace std;
class SwapNumber
{
	public:
		void swap_num(int num1,int num2)
		{
			int temp;
			temp=num1;
			num1=num2;
			num2=temp;
			cout<<"After Swapping:"<<endl;
			cout<<"num1="<<num1<<endl;
			cout<<"num2="<<num2<<endl;
			
		}
};
int main()
{
	SwapNumber sn;
	int num1,num2;
	cout<<"Enter Two Number"<<endl;
	cin>>num1>>num2;
	sn.swap_num(num1,num2);
}
