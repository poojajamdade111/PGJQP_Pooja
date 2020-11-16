/********WAP TO DISPLAY YOUR FRIENDS NAME ON THE SCREEN*********/

#include<iostream>
using namespace std;

class Friends
{
public:
		char name1[],name2[],name3;
		
		void getdata()
		{
			cout<<"Enter friends name:"<<endl;
			cin>>name1;
			cout<<"Enter friends name:"<<endl;
			cin>>name2;
			cout<<"Enter friends name:"<<endl;
			cin>>name3;			
		}
		void display()
		{
			cout<<"********************************"<<endl;
			cout<<"Your friends name are:"<<endl;
			cout<<name1<<endl;
			cout<<name2<<endl;
			cout<<name3<<endl;
					
		}
		
};
	int main()
		{
        Friends f1;
		f1.getdata();
		f1.display();
		}
		



