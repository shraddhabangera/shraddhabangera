#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
char postfix[50],stack[50];
int top=-1;
void push(int ele)
{
stack[++top]=ele;
}
int pop()
{
int ele;
ele=stack[top--];
return ele;
}
int evalofpostfix()
{
int op1,op2,i=0;
char symbol;
while((symbol=postfix[i++])!='\0')
{
if(isalnum(symbol))
{
push(symbol-'0');
}
else
{
op2=pop();
op1=pop();
switch(symbol)
{
case '+':push(op1+op2);
	 break;
case '-':push(op1-op2);
	 break;
case '*':push(op1*op2);
	 break;
case '/':if(op2!=0)
	 {
	 push(op1/op2);
	 break;
	 }
	 else
	 {
	 printf("Cannot divide by 0");
	 exit(0);
	 }
case '^':push(pow(op1,op2));
	 break;
default:printf("Please enter the valid postfix expression\n");
	 exit(0);
}
}
}
return pop();
}
void main()
{
int res;
printf("Enter the postfix expression:\n");
scanf("%s",postfix);
res=evalofpostfix();
printf("The result of Postfix expression is:\n");
printf("%d\n",res);
}
