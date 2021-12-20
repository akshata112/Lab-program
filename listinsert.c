#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
struct student *head=NULL;
struct student{
    int id;
    struct student *next;
};

struct student* create()
{
    struct student *newstudent;
    newstudent=(struct student*)malloc(sizeof(struct student));
    return newstudent;
}

//insertion in the beginning
void push(int studid)
{
    struct student *newstudent;
    newstudent=create();
    newstudent->id=studid;
    newstudent->next=NULL;
    if(head==NULL)
        head=newstudent;
    else{
        newstudent->next=head;
        head=newstudent;
    }
    printf("%d is inserted at the beginning\n",head->id);
}

//insertion at the end 
void append(int studid)
{
    struct student *newstudent,*temp=head;
    newstudent=create();
    newstudent->id=studid;
    newstudent->next=NULL;
    if(head==NULL)
      head=newstudent;
    else{
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
    temp->next=newstudent;
    }
    printf("%d is inserted at the end\n",newstudent->id);
}

//insertion at the given position
void insert(int studid)
{
    int pos;
    struct student *newstudent,*temp=head;
    newstudent=create();
    newstudent->id=studid;
    newstudent->next=NULL;
    if(head==NULL)
        {
        head=newstudent;
        printf("%d is inserted at 1st position\n",studid);
        }
    else{
        printf("enter the position:");
        scanf("%d",&pos);
        for(int i=0;i<pos-1;i++)
            {
                temp=temp->next;
            }
        newstudent->next=temp->next;
        temp->next=newstudent;
        printf("%d is inserted at position %d \n",studid,pos);
        }
}

void display()
{
    struct student *temp;
    temp=head;
    if(temp==NULL)
        printf("no elements to display\n");
    while(temp!=NULL){
        printf("%d\n",temp->id);
        temp=temp->next;
    }
}

int main()
{
    int ch,student_id;
    
    printf("\nenter \n1 to push \n2 to append \n3 to insert at a position \n4 to display \n0 to exit\n");
    while(1)
    {
       printf("\nchoice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
           printf("enter id:");
           scanf("%d",&student_id);
           push(student_id);
           break;
           case 2:
           printf("enter id:");
           scanf("%d",&student_id);
           append(student_id);
           break;
           case 3:
           {
           printf("enter id:");
           scanf("%d",&student_id);
           insert(student_id);
           break;
           }
           case 4:
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
