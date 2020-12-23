/***12. WAP to calculate the perimeter and area of Rectangle***/
import java.util.*;
class Rectangle
{
int a,b,c,d,perimeter,area,width,height;
void getdata()
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter a & c:");
a=sc.nextInt();
System.out.println("Enter b & d:");
b=sc.nextInt();
System.out.println("Enter width:");
width=sc.nextInt();
System.out.println("Enter height:");
height=sc.nextInt();
}
void calculate_perimeter()
{
perimeter =2*(a+b);  
}
void calculate_rectarea()
{
area=width*height;
}
void display()
{
System.out.println("perimeter of rectangle:"+perimeter);
System.out.println("Area of rectangle:"+area);
}
public static void main(String[] args)
{
Rectangle r=new Rectangle();
r.getdata();
r.calculate_perimeter();
r.calculate_rectarea();
r.display();
}
}