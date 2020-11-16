/*******9.Write a program to compute Quotient and Remainder***********/
#include<iostream>
using namespace std;
class FindRemQuo
{
	public:
		 int divisor,dividend,quotient,remainder;	
		 void getdata()
		 {
		 	cout<<"Enter dividend:"<<endl;
    		cin>> dividend;
    		cout<<"Enter divisor:"<<endl;
    		cin>> divisor;
		 }
		 void compute_quorem()
		 {
		 	quotient=dividend/divisor;
    		remainder=dividend%divisor; 	
		 }
		 void display()
		 {
		 	cout<<"Quotient="<<quotient<<endl;
   			cout<<"Remainder="<<remainder;

		 }
};
int main()
{
	FindRemQuo frq;
	frq.getdata();
	frq.compute_quorem();
	frq.display();
}
