#include <stdio.h>
struct student{
    string n;
    int id;
    struct student *next;
}
struct student *head=NULL;
struct student* create(){
    struct student *newstudent;
    newstudent=(struct student*)malloc(sizeof(struct student));
    return newstudent;
}
//insertion in the beginning
push(string n, int studid){
    struct student *newstudent;
    newstudent=create();
    newstudent.id=studid;
    newstudent.name=n;
    newstudent.next=NULL;
    if(head==NULL)
        head=newstudent;
    else
        newstudent.next=head;
        head=newstudent;
}

//insertion at the end 
append(string n, int studid){
    struct student *newstudent,*temp;
    newstudent=create();
    newstudent.name=n;
    newstudent.id=studid;
    newstudent.next=NULL;
    if(head==NULL)
      head=newstudent;
    else{
        temp=head;
        while(temp.next!=NULL)
            temp=temp.next;
    temp.next=newstudent;
    }
}

//insertion at the given position
insert(int pos, string n, int studid){
    struct student *newstudent,*temp;
    newstudent=create();
    newstudent.name=n;
    newstudent.id=studid;
    newstudent.next=NULL;
    for(int i=1;i<pos-1;i++){
        temp=temp.next;
    }
    newstudent.next=temp.next;
    temp.next=newstudent;
}

display(){
    struct student *temp;
    temp=head;
    while(temp!=NULL){
        printf("%s",temp.name);
        printf("%d",temp.id);
        temp=temp.next;
    }
}

int main(){
    int ch,student_id,position;
    string student_name;
    printf("enter name and id:");
    scanf("%s",student_name);
    scanf("%d",&student_id);
    printf("\nenter \n1 to push \n2 to append \n3 to insert \n0 to exit");
    while(1)
    {
       printf("\nchoice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
           push(student_name,student_id);
           break;
           case 2:
           append(student_name,student_id);
           break;
           case 3:
           printf("enter the position");
           scanf("%d",&position);
           insert(position,student_name,student_id);
           break;
           case 4:
           display();
           break;
           case 0:
           exit(0);
           default:
           printf("invalid choice entry");
           break;
       }
    }
return 0;
}
