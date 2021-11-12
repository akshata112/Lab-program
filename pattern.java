import java.lang.*;
import java.util.*;
class pattern{
public static void main(String args[])
{
int n,i,j,num=1;
Scanner in=new Scanner (System.in);
System.out.println("enter the value of n:");
n=in.nextInt();
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
System.out.print(" "+num);
num++;
}
System.out.println("\n");
}
}
}


  
