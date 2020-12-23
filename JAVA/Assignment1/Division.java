/******9.WAP to Compute Quotient and Remainder.****/
import java.util.*;
class Division
{
   int divisor,dividend,quotient,remainder;
   void getdata()
 {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter dividend: ");
    dividend=sc.nextInt();
    System.out.println("Enter Divisor:");
    divisor=sc.nextInt(); 
 }
 void divide()
{
  quotient=dividend/divisor;
  remainder=dividend%divisor;
}
 void display()
{
 System.out.println("-----------------------");
 System.out.println(" quotient:"+quotient);
 System.out.println(" remainder:"+ remainder);
 System.out.println("-----------------------");
}
public static void main(String[] args)
  {
    Division d=new Division();
    d.getdata();
    d.divide();
    d.display();
  }
}
