package CIE;
import java.util.Scanner;
public class internals extends student {
    public int int_marks[]=new int[5];
    public internals(int usn,String name, int sem){
        super(usn, name, sem);
    }
    public void marks()
    {
        System.out.println("Enter marks scored in internals");
        for(int i=0; i<5; i++)
        {
            Scanner in=new Scanner(System.in);
            System.out.print("Subject "+(i+1)+":");
            int_marks[i]=in.nextInt();
        }
    }
}

