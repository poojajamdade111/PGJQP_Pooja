/*************6.Write a program to calculate the increment of a given number by 7***************/

#include<iostream>
using namespace std;
class Increment
{
	public:
		int num;
	void getdata()
	{
		cout<<"Enter number:"<<endl;
		cin>>num;
	}	
	int increment_num()
	{	
		num=num+7;         //no increment here
	}
	void display()
	{
		cout<<"*******num inctremented by 7******"<<endl;
		cout<<"incremented num:"<<num<<endl;
	}
};
int main()
{
	Increment i1;   
	i1.getdata();
	i1.increment_num();	
	i1.display();
}
