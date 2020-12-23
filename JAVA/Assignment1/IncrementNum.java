/**********5. WAP to calculate the increment of a given number by 1**********/
import java.util.*;
class IncrementNum
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
num++;
}
void display()
{
System.out.println("-----------------");
System.out.println("Number:"+num);
System.out.println("-----------------");
}
public static void main(String[] args)
{
IncrementNum in=new IncrementNum();
in.getdata();
in.increment();
in.display();
}
}