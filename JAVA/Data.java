/*******Expect all the type of data from user and display it ********/
import java.util.*;  // scanner class defined in this pakage
class Data
{
byte num1;
short num2;
int num3;
long num4;
float num5;
double num6;
char ch;
boolean b1;
void getdata()
{
Scanner sc=new Scanner(System.in); // help to take i/p from user
System.out.println("Enter byte");
num1=sc.nextByte();
System.out.println("Enter short");
num2=sc.nextShort();
System.out.println("Enter integer");
num3=sc.nextInt();
System.out.println("Enter long");
num4=sc.nextLong();
System.out.println("Enter float");
num5=sc.nextFloat();
System.out.println("Enter double");
num6=sc.nextDouble();
System.out.println("Enter character");
//ch=sc.next();
}
void display()
{
System.out.println("Entered data by user");
System.out.println(num1);
System.out.println(num2);
System.out.println(num3);
System.out.println(num4);
System.out.println(num5);
System.out.println(num6);
System.out.println(ch);

}

public static void main(String[] args)
{
Data d1=new Data();
d1.getdata();
}
}