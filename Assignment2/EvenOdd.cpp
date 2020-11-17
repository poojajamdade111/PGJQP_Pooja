/*******2.WAP to check whether a number is even or odd.*********/
#include<iostream>
using namespace std;
class EvenOdd
{
	int num;
	public:
		void check_EvenOdd(int num)  //passing argument to the fuction
		{
			if(num%2==0)
			{
				cout<<"Number is Even"<<endl;
			}	
			else
			{
				cout<<"Number is Odd"<<endl;
			}	
		}
};
int main()
{
	EvenOdd eo;
	int num;
	cout<<"Enter any number:"<<endl;
   	cin>>num;
	eo.check_EvenOdd(num);      //passing values to the fuction
}
