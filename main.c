#include <stdio.h>

int main(int argc, char **argv)
{
	float a,b,result;
    int i=0,reminder;
    char op;
    while(i<10){
    printf("\nenter a operator b:");
    scanf("%f%c%f",&a,&op,&b);
    switch(op){
        case'+':
        result=a+b;
        printf("result is %f",result);
        break;
        case'-':
        result=a-b;
        printf("result is %f",result);
        break;
        case'*':
        result=a*b;
        printf("result is %f",result);
        break;
        case'/':
        result=a/b;
        printf("result is %f",result);
        break;
        case'<':{
        if(a<b){
        printf("a is less than b");}
        else{
        printf("b is lesser than a");}}
        break;
        case'>':{
        if(a>b){
        printf("a is greater than b");}
        else{
        printf("b is greater than a");}}
        break;
        case'=':{
        if(a==b){
           printf("a is equal to b"); 
        }
        else{
           printf("a is not equal to b");
        }}
        break;
        case'%':
        reminder=(int)a%(int)b;
        printf("reminder is %d",reminder);
        break;
        case'!':
        if(a!=b){
            printf("a is not equal to b");
        }
        else{
            printf("a and b are equal");
        }
        break;
        //i is for incrementing
        case'i':
        result=a+1;
        printf("result is %f",result);
        break;
        default:
        printf("invalid operator");
    }
    i++;}
	return 0;
}
