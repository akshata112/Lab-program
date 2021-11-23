#include <stdio.h>
#include<stdlib.h>
#define SIZE 4

int r=-1,f=-1,ar[SIZE];
int val;
int isfull()
{
    if(f==(r+1)%SIZE)
       return 1;
    else
       return 0;
}

int isempty()
{
    if(f==-1 && r==-1)
       return 1;
    else
       return 0;
}

void enqueue()
{
    if(isfull()){
        printf("queue is full");
    }
    else{
        if(isempty())
            f=0;
        printf("enter element");
        scanf("%d",&val);
        ar[r=(r+1)%SIZE]=val;
        printf("%d is enqueued",val);
    }

}

void dequeue()
{
    if(isempty()){
        printf("queue is empty");
        }
    else if((f==r))
        {
            printf("%d is qedueued",ar[f]);
            r=f=-1;
        }
    else{
        printf("%d is qedueued",ar[f]);
        f=(f+1)%SIZE;
    }
}

void display()
{
    if(isempty())
      printf("no element to display:");
    else
      for(int i=f;i!=r;i=(i+1)%SIZE)
          {
        printf("\n%d",ar[i]);
      }
}
int main()
{   
    int ch;
    printf("\nenetr 1 to enqueue \n 2 to dequeu \n 3 to display \n0 to exit");
    while(1)
    {
       printf("\nchoice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
           enqueue();
           break;
           case 2:
           dequeue();
           break;
           case 3:
           display();
           break;
           case 0:
           exit(0);
           break;
           default:
           printf("invalid choice entry");
           break;
       }
    }
return 0;
}
