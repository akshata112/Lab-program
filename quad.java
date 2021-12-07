import java.util.*;
import java.lang.*;
class quad{
public static void main(String args[])
{
double a,b,c,r1=0,r2=0,d;
Scanner in=new Scanner(System.in);

System.out.println("enter a");
a=in.nextDouble();
System.out.println("enter b");
b=in.nextDouble();
System.out.println("enter c");
c=in.nextDouble();

d=b*b-4*a*c;
if(d<0)
{
System.out.println("no real solution");
}
else if (d>0)
{
r1=(-b+Math.sqrt(d))/(2*a);
r2=(-b-Math.sqrt(d))/(2*a);
System.out.println("root1 is"+r1);
System.out.println("root2 is"+r2);
}
else if(d==0)
{
r1=(-b/(2*a));
r2=(-b/(2*a));
System.out.println("root1 is"+r1);
System.out.println("root2 is"+r2);
}
}
}




