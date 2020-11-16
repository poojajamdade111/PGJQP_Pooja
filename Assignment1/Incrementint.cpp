#include<iostream>
using namespace std;
class Incrementint
{
	public:
		int num;
		
		void getdata()
		{
			cout<<"Enter any integer:";
			cin>>num;
			cout<<"your entered num is:"<<num<<endl;
		}
		void increment()
		{
				num++;			
		}
		void display()
		{
			cout<<"number after increment:"<<num<<endl;
		}
};
int main()
{
	Incrementint i1;
	i1.getdata();
	i1.increment();
	i1.display();
	
}
