import java.lang.*;
import java.util.Scanner;
class GetInputFromUser
{
public static void main(String args[])
{
int a;
float b;
String s;

Scanner in=new Scanner(System.in);

System.out.println("enter an integer");
a=in.nextInt();
System.out.println("You entered integer "+a);

System.out.println("enter a float");
b=in.nextFloat();
System.out.println("you entered float"+b);

System.out.println("enter a string");
s=in.nextLine();
s=in.nextLine();
System.out.println("you entered string "+s);
}}
