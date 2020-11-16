#include<iostream>
using namespace std;
class Multiplication
{
	public:
		int num1,num2,num3,mul;
		void getdata()
		{
			cout<<"Enter no1:"<<endl;
			cin>>num1;
			cout<<"Enter no2:"<<endl;
			cin>>num2;
			cout<<"Enter no3:"<<endl;
			cin>>num3;
		}
		void cal_multiplication()
		{
			mul=num1*num2*num3;
		}
		void display()
		{
			cout<<"---------------------------"<<endl;
			cout<<"multiplication:"<<mul<<endl;
		}
	
};
int main()
{
	Multiplication m;
	m.getdata();
	m.cal_multiplication();
	m.display();
}
