#include<iostream>
using namespace std;
class Firstprg
{
	public:
		char name[];
		
		void getdata()
		{
			cout<<"Enter your name:";
			cin>>name;
		}
		void display()
		{
			cout<<"your name is:"<<name;
		}
};
int main()
{
	Firstprg f1;
	f1.getdata();
	f1.display();
	
}
