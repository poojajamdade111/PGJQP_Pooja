/*****11.WAP to calculate the area of Square.******/
import java.util.*;
class SquareArea
{
int side,areaofsquare;
void getdata()
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter side of square");
side=sc.nextInt();
}
void calculate_area()
{
areaofsquare=side*side;
}
void display()
{
System.out.println("Area of Square:"+areaofsquare);
}
public static void main(String[] args)
{
SquareArea sa=new SquareArea();
sa.getdata();
sa.calculate_area();
sa.display();
}
}