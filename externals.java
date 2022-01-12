package SEE;
import CIE.student;

import java.util.Scanner;

public class externals extends student {
    public int ext_marks[]=new int[5];
    public externals(int usn,String name, int sem){
        super(usn, name, sem);
    }
    public void marks(){
        System.out.println("Enter marks scored in externals");
        Scanner in=new Scanner(System.in);
        for(int i=0;i<5;i++){
            System.out.print("Subject "+(i+1)+":");
            ext_marks[i]=in.nextInt();
        }
    }
}
