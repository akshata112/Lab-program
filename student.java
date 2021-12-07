import java.util.*;

public class Main
{
    String name;
    String USN;
    static int credits[]=new int[5];
    static  int marks[]=new int[5];
    static double sgpa;
    
    Main (String s, String id){
        name=s;
        USN=id;
        for(int i=0; i<5; i++)
        {
            Scanner in=new Scanner(System.in);
            System.out.println("credit and mark in all 5 subjects are");
            credits[i]=in.nextInt();
            marks[i]=in.nextInt();
        }
    }
    static calsgpa(){
        int sum=0,tot=0,totcredits=0;
        for (int j=0;j<5;j++ )
        {
            tot=credits[j]*marks[j];
            sum=sum+tot;
            totcredits=totcredits+credits[j];
            tot=0;
        }
        sgpa=sum/(totcredits*10);
        System.out.println("sgpa of a student is "+sgpa);
    }
	public static void main(String[] args) {
	    
	    Main s1 = new Main("aksh","3a008");
        System.out.println(s1.name);
        System.out.println(s1.USN);
        calsgpa();
	}
}
