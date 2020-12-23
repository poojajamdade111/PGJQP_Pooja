/***2. WAP to display your friends name on the screen.(\n, \t)***/
import java.util.*;
class FriendsName
{
int i;
Scanner sc=new Scanner(System.in);
 int n=sc.nextInt();
String[] name=new String[n];
void getdata()
{
System.out.println("Enter name:");
for(i=0;i<n;i++)
{
name[i]=sc.nextLine();
}
}
void display()
{
System.out.println("Your All friends Name:");
for(i=0;i<n;i++)
{
System.out.println(name[i]);
}
}
public static void main(String[] args)
{
System.out.println("Enter how many friends name you want to enter:");
FriendsName fn=new FriendsName();
fn.getdata();
fn.display();
}
}