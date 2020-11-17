/****7.WAP to check whether a no is +ve,-ve or zero****/
#include<iostream>
using namespace std;
class CheckNumber
{
	public:
			void check_number(int num)
			{
				if(num>0)
				{
					cout<<"Number is Positive"<<endl;
				}
				else if(num<0)
				{
					cout<<"Number is Negative"<<endl;
				}
				else
				{
					cout<<"Number is Zero"<<endl;
				}
			}
	
};
int main()
{
	CheckNumber cn;
	int num;
	cout<<"Enter Number:"<<endl;
	cin>>num;
	cn.check_number(num);
}
