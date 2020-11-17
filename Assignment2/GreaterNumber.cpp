/**4. WAP to check whether a number is greater than 10 or not**/
#include<iostream>
using namespace std;
class GreaterNumber
{
	public:
		void check_greaternum(int num)
		{
			if(num>10)
			{
				cout<<"number is greater than 10"<<endl;
			}
			else
			{
				cout<<"number is not greater than 10"<<endl;
			}
		}
};
int main()
{
	GreaterNumber en;
	int num;
	cout<<"Enter Number:"<<endl;
	cin>>num;
	en.check_greaternum(num);	
}
