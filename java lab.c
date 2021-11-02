//sumaverage and printing even numbers
#include <stdio.h>

void printeven(int a, int b)
{
    while(a>=b){
        if(b%2==0){
            printf("\n%d",b);
        }
        b++;
    }
    while(b>=a){
        if(a%2==0){
            printf("\n%d",a);
        }
        a++;
    }
}
float sumaver(int a,int b)
{
    int sum;
    sum=a+b;
    printf("\n sum is %d",sum);
    float avrg;
    avrg=(a+b)/2;
    printf("average is %f",avrg);
    return avrg;
}
int main(int argc, char **argv)
{
	int a,b,c,n1,n2;
    printf("enter no a,b,c\t");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && a<=c)
    {
        n1=b;n2=c;
    }
    if(b<=a && b<=c)
    {
        n1=a;n2=c;
    }
    if(c<=a && c<=b)
    {
        n1=a;n2=b;
    }
    printf("\n two numbers are %d and %d",n1,n2);
    sumaver(n1,n2);
    printeven(n1,n2);
	return 0;
}

