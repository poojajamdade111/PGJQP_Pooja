#include<iostream>
using namespace std;	
class FloatMultilication
{
	public:
	double num1,num2,mul;
	void getdata()
	{
		cout<<"Enter first number:"<<endl;
	    cin>>num1;
	    cout<<"Enter second number:"<<endl;
	    cin>>num2;
	}
	void cal_multiplication()
	{
		mul=num1*num2;         
	}
	void display()
	{
		cout<<"----------------------"<<endl;
		cout<<"multiplication:"<<mul<<endl;
		cout<<"----------------------"<<endl;
	}
};
int main() 
{
	FloatMultilication fm;
	fm.getdata();
	fm.cal_multiplication();
	fm.display();

}
