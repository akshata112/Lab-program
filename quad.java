import java.util.*;
class Main
{
  public static void main (String args[])
  {
    double a, b, c, r1 = 0, r2 = 0, d;
    Scanner in = new Scanner (System.in);
      System.out.println ("Enter coefficients a b c of quadratic equation");
      System.out.print ("a=");
      a = in.nextDouble ();
      System.out.print ("b=");
      b = in.nextDouble ();
      System.out.print ("c=");
      c = in.nextDouble ();

      d = b * b - 4 * a * c;
    if (d < 0)
      {
	System.out.println ("No real solution");
      }
    else if (d > 0)
      {
	r1 = (-b + Math.sqrt (d)) / (2 * a);
	r2 = (-b - Math.sqrt (d)) / (2 * a);
	
	System.out.println ("root1 is " + r1);
	System.out.println ("root2 is " + r2);
      }
    else if (d == 0)
      {
	r1 = (-b / (2 * a));
	r2 = (-b / (2 * a));
	System.out.println("Equal roots");
	System.out.println ("root1 is " + r1);
	System.out.println ("root2 is " + r2);
      }
  }
}
