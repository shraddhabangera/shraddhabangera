#include<stdio.h>
#include<stdlib.h>
typedef struct Node* lstptr;
struct Node
{
int data;
lstptr link;
};
lstptr first=NULL;

lstptr getnode()
{
lstptr node;
node=(lstptr)malloc(sizeof(struct Node));
return node;
}

void insertBegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
new->link=first;
first=new;
}

void insertEnd(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
temp=first;
while(temp->link!=NULL)
temp=temp->link;
temp->link=new;
}
else
first=new;
}

void display()
{
lstptr temp;
if(first==NULL)
{
printf("List is empty");
exit(0);
}
temp=first;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\t",temp->data);
}

void deleteBegin()
{
lstptr temp;
if(first==NULL)
{
printf("List is empty");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
first=first->link;
free(temp);
}
}

void deleteEnd()
{
lstptr temp,prev;
if(first==NULL)
{
printf("List is empty");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
{
prev=temp;
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
prev->link=NULL;
free(temp);
}
}
}
void deleteSpecific()
{
  lstptr temp,prev,data;
  temp=First;
  if(First==NULL)
  {
    printf("List is empty\n");
    exit(0);
  }
  else if(First->node!=NULL)
  {
    First=First->prev;
  }
  else
  {
    while(temp->data!=ele && temp->node!=NULL)
    {
      prev=temp;
      temp=temp->node;
    }
    if(temp->node==NULL && temp->data!=ele)
    {
      printf("Item not found");
    }
   else if(temp->ptr!=NULL)
   {
     prev->node=temp->node;
   }
   else
   {
     prev->node=NULL;
   }
  free(temp);           
 }
}
void main()
{
int ch,opt=1,ele;
while(opt)
{
printf("\n1.INSERT BEGIN\n2.INSERT END\n3.DELETE BEGIN\n4.DELETE END\n5.DELETE SPECIFIC\n6.DISPLAY\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the element:");
        scanf("%d",&ele);
        insertBegin(ele);
        break;
case 2:printf("Enter the element:");
        scanf("%d",&ele);
        insertEnd(ele);
        break;
case 3:deleteBegin();
        break;
case 4:deleteEnd();
        break;
case 6:display();
        break;
}
 printf("\nDo you want to continue\n");
 scanf("%d",&opt);
}
}




