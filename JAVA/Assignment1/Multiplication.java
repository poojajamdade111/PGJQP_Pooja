/**********8. WAP to calculate the multiplication of three numbers.**********/
import java.util.*;
class Multiplication
{
int num1;
int num2;
int num3;
void getdata()
{
Scanner sc=new Scanner(System.in); // help to take i/p from user
System.out.println("Enter number");
num1=sc.nextInt();
System.out.println("Enter number");
num2=sc.nextInt();
System.out.println("Enter number");
num3=sc.nextInt();
}
void multiply()
{
num1=num1*num2*num3;
}
void display()
{
System.out.println("-----------------");
System.out.println("Multiplication:"+num1);
System.out.println("-----------------");
}
public static void main(String[] args)
{
Multiplication m1=new Multiplication();
m1.getdata();
m1.multiply();
m1.display();
}
}