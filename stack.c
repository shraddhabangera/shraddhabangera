#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define n 10
int stack[50],top=-1,i,ele;
void push(int ele)
{
if(top==n-1)
{
printf("Stack is Full");
exit(0);
}
else
{
stack[++top]=ele;
}
}
int pop()
{
int ele;
if(top==-1)
{
printf("Stack is empty");
exit(0);
}
else
{
ele=stack[top--];
return ele;
}
}
void display()
{
int e;
if(top==-1)
printf("Stack is empty");
else
printf("Stack elements are:\n");
for(i=0;i<=top;i++)
printf("%d\t",stack[i]);
printf("\n");
}
void main()
{
char c;
int ch;
while(1)
{
printf("Select your Options\n1.Push\n2.POP\n3.Display\n4.Quit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the value\n");
        scanf("%d",&ele);
        push(ele);
        break;
case 2:pop();
break;
case 3:display();
break;
case 4:printf("Thank you");
exit(0);
default:printf("Invalid Choice");
}

}
}
