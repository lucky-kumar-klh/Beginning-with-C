#include <stdio.h>
#include <stdlib.h>

struct node
{
 int data;
 struct node *next;
}*start=NULL,*curr=NULL;

void create(int ele)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data = ele;
 newnode->next=NULL;
 
 if(start==NULL)
  start=newnode;
 else
  curr->next=newnode;
  
 curr=newnode;
}

void insert_at_end()
{
 int ele;
 printf("Please enter the num: ");
 scanf("%d",&ele);
 struct node *newnode;
 newnode = (struct node*)malloc(sizeof(struct node));
 newnode->data = ele;
 newnode->next = NULL;
 
 curr->next = newnode;
 curr = newnode;
}

void display()
{
 if(start==NULL)
  printf("list is empty");
 else
 {
  struct node *temp=start;
  while(temp!=NULL)
  {
   printf("%d ",temp->data);
   temp = temp->next;
  }
 }
}

void sort()
{
 if(start==NULL)
  printf("List is empty");
 else
 {
  struct node *i=start;
  while(i!=NULL)
  {
   struct node *j=start;
   while(j!=NULL)
   {
    struct node *k = j->next;
    if(j->data > k->data)
    {
     int x=j->data;
     j->data=k->data;
     k->data=x;
    }
    j=j->next;
   }
   i=i->next;
  }
 }
}

int main()
{
 int choice,ele;
 do{
  printf("\n0.Exit\n1.Create\n2.Insert at end\n3.Display\nPlease enter the choice: ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 0:
    printf("Exited!");
    break;
   case 1:
    printf("Please enter the element: ");
    scanf("%d",&ele);
    create(ele);
    break;
   case 2:
    insert_at_end();
    break;
   case 3:
    display();
    break;
   case 4:
    sort();
    break;
   default:
    printf("Invalid input!");
    break;
  }
 }while(choice!=0);
}