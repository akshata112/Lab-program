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
    }
    static void accept(Main s){
        Scanner in=new Scanner(System.in);
        System.out.println("Enter credit and mark obtained");
        for(int i=0; i<5; i++)
        {
            System.out.println("subject "+(i+1));
            System.out.print("credit : ");
            s.credits[i]=in.nextInt();
            System.out.print("marks : ");
            s.marks[i]=in.nextInt();
            System.out.println();
        }
    }
    static void display(Main s){
        
            System.out.println("Name:"+s.name);
            System.out.println("USN:"+s.USN);
            for(int j=0; j<5; j++)
        {
            int a=j+1;
            System.out.println("subject "+a+":  credit:"+s.credits[j]+" mark:"+s.marks[j]);  
        }
    }
    static void calsgpa(Main s){
        int sum=0,tot=0,totcredits=0;
        for (int j=0;j<5;j++ )
        {
            tot=s.credits[j]*s.marks[j];
            sum=sum+tot;
            totcredits=totcredits+s.credits[j];
            tot=0;
        }
        sgpa=sum/(totcredits);
        System.out.println("sgpa of a student is "+sgpa);
    }

        public static void main(String[] args) {
	    
	    Main s1 = new Main("Akshata","3a008");
	accept(s1);
        display(s1);
        calsgpa(s1);
	}
}
