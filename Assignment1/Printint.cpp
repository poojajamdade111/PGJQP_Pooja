#include<iostream>
using namespace std;
class Printint
{
	public:
		int integer;
		
		void getdata()
		{
			cout<<"Enter any integer:";
			cin>>integer;
		}
		void display()
		{
			cout<<"your entered integer:"<<integer;
		}
};
int main()
{
	Printint p;
	p.getdata();
	p.display();
	
}
