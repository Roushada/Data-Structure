#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
top=-1;
printf("Enter the size of stack:");
scanf("%d",&n);
printf(" stack immplementation using array:" );
do
{
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("Enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
break;
}
default:
{
printf("\n invalid choice");
}
}}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("stack overflow");
}
else
{
printf("Enter the value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("stack underflow");
}
else
{
printf("The popped element is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("Element in stack\n");
for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}}
else
{
printf("Empty stack");
}
}

                                                                                                                                                                                 
