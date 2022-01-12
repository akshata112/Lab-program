import java.util.Scanner;

import CIE.internals;
import CIE.student;
import SEE.externals;
public class score {
    static int usn;
    static String name;
    static int sem;
    static int n;
    static double total;
    public static void main(String args[]){
        System.out.print("Enter number of students:");
        Scanner scan=new Scanner(System.in);
        n=scan.nextInt();
        student s[]=new student[n];
        for(int i=0;i<n;i++){
            System.out.println();
            System.out.println("*********Enter student details*********");
            System.out.print("Name:");
            name=scan.next();
            System.out.print("USN:");
            usn=scan.nextInt();
            System.out.print("SEM:");
            sem=scan.nextInt();
            s[i]=new student(usn, name, sem);
            internals im = new internals(usn, name, sem);
            im.marks();
            externals em = new externals(usn, name, sem);
            em.marks();
            for(int j=0;j<5;j++){
                total=im.int_marks[j]+(em.ext_marks[j]/2);
                System.out.println("Final score of student in subject "+(j+1)+"   "+total);
            }
        }
    }
}


    
