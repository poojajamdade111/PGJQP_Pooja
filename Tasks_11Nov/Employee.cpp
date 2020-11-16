/***Task 3: Create a class Employee with 2 methods :accept() and display() showing relevant information of the employee.
 Display atleast 2 employee records.***/
#include<iostream>
using namespace std;
class Employee
{
	int emp_id;
	char emp_name[20];
	double emp_salary;
	char dateOfJoining[10]; 
	public:
		void accept()
		{
			cout<<"......................\n";
			cout<<"Enter Employee Details\n";
			cout<<"......................\n";
			cout<<"Enter EmployeeId:"<<endl;
			cin>>emp_id;
			cout<<"Enter EmployeeName:"<<endl;
			cin>>emp_name;
			cout<<"Enter salary of employee:"<<endl;
			cin>>emp_salary;
			cout<<"Enter dateOfJoining:"<<endl;
			cin>>dateOfJoining;
		}
		void display()
		{
			cout<<"......................\n";
			cout<<"Employee Details\n";
			cout<<"......................\n";
			cout<<"EmployeeId:"<<emp_id<<endl;
			cout<<"EmployeeName:"<<emp_name<<endl;
			cout<<"Employeesalary:"<<emp_salary<<endl;
			cout<<"dateOfJoining:"<<dateOfJoining<<endl;			
		}
};
int main()
{
	int n,i;
	cout<<"Enter the number of employees information you want to enter"<<endl;
	cin>>n;
	Employee e[n];          
	for(i=0;i<n;i++)
	{
		e[i].accept();		//accept n no of employees info
	}
	for(i=0;i<n;i++)
	{
		e[i].display();		  //	display n no of employees info
	}
	
}
