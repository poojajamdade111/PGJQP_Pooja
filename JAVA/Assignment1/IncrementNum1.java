/**********6. WAP to calculate the increment of a given number by 7**********/
import java.util.*;
class IncrementNum1
{
int num;
void getdata()
{
Scanner sc=new Scanner(System.in); // help to take i/p from user
System.out.println("Enter number");
num=sc.nextInt();
}
void increment()
{
num=num+7;
}
void display()
{
System.out.println("-----------------");
System.out.println("Number:"+num);
System.out.println("-----------------");
}
public static void main(String[] args)
{
IncrementNum1 in=new IncrementNum1();
in.getdata();
in.increment();
in.display();
}
}