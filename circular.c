#include<stdio.h>
#include<stdlib.h>
#define maxsize 4
int q[30],front=-1,rear=-1;

void Enqueue(int ele)
{
rear=(rear+1)%maxsize;

if(rear==front)
{
printf("Queue is full\n");
exit(0);
}
q[rear]=ele;
if(front==-1)
{
front=0;
}
}
void Dequeue()
{
int ele;
if(front==-1)
{
printf("Queue is empty\n");
exit(0);
}
ele=q[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%maxsize;
printf("%d is removed\n",ele);
}
}
void Display()
{
int i;
if(front==-1)
{
printf("Queue is empty\n");
exit(0);
}
if(front<=rear)
{
printf("Queue contains");
for(i=front;i<=rear;i++)
printf("%d",q[i]);
}
else
{
for(i=front;i<maxsize;i++)
{
printf("%d",q[i]);
}
for(i=0;i<=rear;i++)
{
printf("%d",q[i]);
}
}
}
void main()
{
int ch,ele,op=1;
while(op)
{
printf("\nSelect the Option\n1.Insert\n2.Delete\n3.Display\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the value to be inserted\n");
        scanf("%d",&ele);
        Enqueue(ele);
        break;
case 2:Dequeue();
        break;
case 3:Display();
        break;
default:printf("Invlid Choice\n");
}
printf("\nDo you want to continue(0|1)\n");
scanf("%d",&op);
}
}
