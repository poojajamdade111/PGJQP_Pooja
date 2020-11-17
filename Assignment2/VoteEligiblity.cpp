/*********3.WAP to check whether a person is eligible for vote or not********/
#include<iostream>
using namespace std;
class VoteEligiblity
{
	public:
	void check_eligiblity(int age)
	{
		if(age>18)
		{
			cout<<"eligible for vote"<<endl;
		}
		else
		{
			cout<<"Not eligible for vote"<<endl;
		}
	}
};
int main()
{
	VoteEligiblity ve;
	int age;
	cout<<"Enter Age:"<<endl;
   	cin>>age;
	ve.check_eligiblity(age);
}
