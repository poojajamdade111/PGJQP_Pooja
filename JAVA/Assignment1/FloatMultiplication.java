/******10.WAP to Multiply two Floating Point Numbers****/
import java.util.*;
class FloatMultiplication
{
float num1,num2;
void getdata()
{
Scanner sc=new Scanner(System.in); // help to take i/p from user
System.out.println("Enter number");
num1=sc.nextInt();
System.out.println("Enter number");
num2=sc.nextInt();
}
void multiply()
{
num1=num1*num2;
}
void display()
{
System.out.println("-----------------");
System.out.println("Multiplication:"+num1);
System.out.println("-----------------");
}
public static void main(String[] args)
{
FloatMultiplicationm1=new FloatMultiplication();
fm.getdata();
fm.multiply();
fm.display();
}
}