/**********************7.write a program to calculate addition of two number**************************/
#include<iostream>
using namespace std;
class Addition
{
	public:
	int num1,num2,add;
	void getdata()
	{
	cout<<"Enter First number:"<<endl;	
	cin>>num1;
	cout<<"Enter second number"<<endl;	
	cin>>num2;
	}
	void cal_addtion()      //fuction addting two number
	{
	add=num1+num2;	     
	}	
	void display()
	{
		cout<<"Addition of"<<num1<<"and"<<num2<<"is:"<<add<<endl;
	}
};
int main()
{
	Addition a1;
	a1.getdata();
	a1.cal_addtion();
	a1.display();
}

