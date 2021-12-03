import java.lang.*;

class shape{
double d1,d2;

shape(double a,double b){
d1=a;
d2=b;
}

double area() {
System.out.println("Area for Figure is undefined.");
return 0;
}
}

class rectangle extends shape{

rectangle(double a,double b)
{
super(a,b);
}
double area(){
return d1*d2;
}
}


class triangle extends shape{
triangle(double a,double b){
super(a,b);
}
double area(){
return d1*d2/2;
}
}

class circle extends shape{
circle(double a){
super(a,a)
}
double area(){
return 3.14*d1*d2;
}
}






