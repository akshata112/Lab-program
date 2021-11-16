#include <stdio.h>
#define SIZE 10

int r=-1,f=-1,ar[SIZE];
int n,true,false;
int isfull()
{
    if(r+1%n==f)
       return true;
    else
       return false;
}

int isempty()
{
    if(r==-1 && f==-1)
       return true;
    else
       return false;
}

void enqueue(int val)
{
    if(isfull())
     printf("queue is full");
    else if(isempty()){
     r=f=0;
     ar[r]=val;
     printf("%d is enqueued",val);
    }
    else{
     r=(r+1)%n;
     ar[r]=val;
     printf("%d is enqueued",val);
    }
}

void dequeue()
{
    if(isempty()){
     printf("queue is empty");}
    else if((f+1)%n==r){
     f=r=-1;
    }
    else{
     f++;}
}

void display()
{
    if(isempty())
      printf("no element to display");
    else
      for(int i=f;i<=r;i++){
        printf("\n%d",ar[i]);
      }
}
void main()
{   printf("enter no of elements");
    scanf("%d",&n);
    int ch=1,elem;
    printf("enetr 1 to enqueue, 2 to dequeu, 3 to display 0 to exit");
    while(ch!=0)
    {
       printf("choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
           printf("eneter element");
           scanf("%d",&elem);
           enqueue(elem);
           break;
           case 2:
           dequeue();
           break;
           case 3:
           display();
           break;
       }
    }
}
