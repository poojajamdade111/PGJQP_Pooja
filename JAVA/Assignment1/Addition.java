/**********7. WAP to calculate the addition of 2 numbers.**********/
import java.util.*;
class Addition
{
int num1,num2;
void getdata()
{
Scanner sc=new Scanner(System.in); // help to take i/p from user
System.out.println("Enter number");
num1=sc.nextInt();
System.out.println("Enter number");
num2=sc.nextInt();
}
void addition()
{
num1=num1+num2;
}
void display()
{
System.out.println("-----------------");
System.out.println("Addition:"+num1);
System.out.println("-----------------");
}
public static void main(String[] args)
{
Addition a1=new Addition();
a1.getdata();
a1.addition();
a1.display();
}
}