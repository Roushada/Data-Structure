#include <stdio.h>
#include <stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct Node*top=NULL;
void push(int value){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
newNode->next=top;
top=newNode;
}
void pop(){
if(top==NULL){
printf("stack is underflow.\n");
return;
}
struct Node*temp=top;
top=top->next;
free(temp);
}
void display()
{
if (top==NULL){
printf("stack is empty.\n");
return;
}
struct Node*temp=top;
printf("Stack elements:\n");
while (temp!=NULL){
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n");
}
void search()
{
struct Node*temp;
int value;
temp=top;
printf ("Enter the element to search:");
scanf("%d",&value);
while (temp!=0)
{
if(temp->data==value)
{
    printf("found\n");
    return;
}
else{
    printf("not found\n");
    return;
}
}
}
int main()
{
int ch,value;
while(1){
printf("stack menu:\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.search\n");
printf("5.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch){
 case 1:
   printf("Enter the values to push:");
   scanf("%d",&value);
   push(value);
   break;
 case 2:
   pop();
   break;
 case 3:
   display();
   break;
 case 4:
   search();
   break;
 case 5:
   exit(0);
 default:
  printf("Invalid choice.\n");
}
}
return 0;
}
            
