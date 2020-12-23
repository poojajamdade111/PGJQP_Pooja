/*****1.WAP to display your name on the screen.*****/
import java.util.*;
class Displayname
{
char name;
void getdata()
{
Scanner sc=new Scanner(System.in); // help to take i/p from user
System.out.println("Enter name");
name=sc.next().charAt(0);
}
void display()
{
System.out.println("-----------------");
System.out.println("Name:"+name);
System.out.println("-----------------");
}
public static void main(String[] args)
{
Displayname dn=new Displayname();
dn.getdata();
dn.display();
}
}