import java.util.*;i

public class Main
{
    String name;
    int id;
    int noofmatches;
    double average;
    
    Main (String s, int i, int n){
        name=s;
        id=i;
        noofmatches=n;
    }
    
    
    
    static double avrg(int a){
        int score,sum=0;
        for (int j=1;j<=a;j++ ){
            Scanner in=new Scanner(System.in);
            System.out.println("Enter score in match "+j);
            score=in.nextInt();
            sum=sum+score;
        }
        return sum/a;
    }
	public static void main(String[] args) {
	    
	    Main p1 = new Main("aksh",8,5);
	    p1.average=avrg(5);
        System.out.println(p1.name);
        System.out.println(p1.id);
		System.out.println("averagescore of 1st player is "+p1.average);
		Main p2 = new Main("addu",2,5);
	    p2.average=avrg(5);
		System.out.println(p2.name);
        System.out.println(p2.id);
		System.out.println("averagescore of 2nd player is "+p2.average);
	}
}
