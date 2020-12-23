/**********2.WAP to print an Integer (Entered by the User)**********/
import java.util.*;
class Printint
{
int num;
void getdata()
{
Scanner sc=new Scanner(System.in); // help to take i/p from user
System.out.println("Enter number");
num=sc.nextInt();
}
void display()
{
System.out.println("-----------------");
System.out.println("Number:"+num);
System.out.println("-----------------");
}
public static void main(String[] args)
{
Printint pi=new Printint();
pi.getdata();
pi.display();
}
}