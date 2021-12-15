import java.lang.*;

class shape{
static double d1,d2;

shape(double a,double b){
d1=a;
d2=b;
}

static double area() {
System.out.println("Dimension of the Figure is undefined.");
return 0;
}
}

class rectangle extends shape{

rectangle(double a,double b)
{
super(a,b);
}
static double area(){
System.out.println("Area of the triangle is  " +(d1*d2));
return 0;
}
}


class triangle extends shape{
triangle(double a,double b){
super(a,b);
}
static double area(){
System.out.println("Area of the triangle is  "+(d1*d2/2));
return 0;
}
}

class circle extends shape{
circle(double a){
super(a,a);
}
static double area(){
System.out.println("Area of the circle is  " +(3.14*d1*d2));
return 0;
}
}

class Main{
    static public void main(String[] args){
        shape shape1=new shape(-1,-1);
        shape.area();
        rectangle shape2=new rectangle(5,6);
        rectangle.area();
        triangle shape3=new triangle(10,5);
        triangle.area();
        circle shape4=new circle(7);
        circle.area();
    }
} 





