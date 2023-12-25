#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*left;
struct node*right;
int data;
};
struct node*root;
struct node*newnode(value){
struct node*newnode=malloc(sizeof(struct node));
newnode->data=value;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
struct node*insert (struct node*root,int value)
{
if(root==NULL){
return newnode(value);
}
else if(root==NULL)
{
return newnode(value);
}
else if(value==root->data)
{
printf("same data can't be stored");
}
else if(value>root->data)
{
root->right=insert(root->right,value);
}
else if(value<root->data){
root->left=insert(root->left,value);
}
return root;
}

void inorderTraversal(struct node*root){
if(root==NULL)return;
inorderTraversal(root->left);
printf("%d->",root->data);
inorderTraversal(root->right);
}

void preorderTraversal(struct node*root){
if(root==NULL)return;
printf("%d->",root->data);
preorderTraversal(root->left);
preorderTraversal(root->right);
}

void postorderTraversal(struct node*root){
if(root==NULL)return;
postorderTraversal(root->left);
postorderTraversal(root->right);
printf("%d->",root->data);
}

struct node*search(struct node*root,int key){
if(root==NULL)
printf("\nNot found!\n");
else if(root->data==key)
printf("\nFound!\n");
else{
if(root->data<key)
return search(root->right,key);
return search(root->left,key);
}
}

struct node*minValueNode(struct node*node)
{
struct node*current=node;

while(current&&current->left!=NULL)
current=current->left;
return current;
}
struct node*deleteNode(struct node*root,int key){
if(root==NULL)
return root;

if(key<root->data)
root->left=deleteNode(root->left,key);
else if(key>root->data)
root->right=deleteNode(root->right,key);
else{
if(root->left==NULL){
struct node*temp=root->right;
free(root);
return temp;
}
if(root->right==NULL){
struct node*temp=root->left;
free(root);
return temp;
}

struct node*temp=minValueNode(root->right);
root->data=temp->data;
root->right=deleteNode(root->right,temp->data);
}
return root;
}

int main()
{
int ch;
int value,search,key;
do{
printf("\n1.Create Root Node\n2.Insert Node\n3.search\n4.InorderTraversal\n5.preorderTraversal\n6.postorderTraversal\n7.Delete\n8.quit\nEnter your choice:");
scanf("%d",&ch);
switch(ch){
case 1:
printf("Enter a Number:");
scanf("%d",&value);
root=newnode(value);
break;
case 2:
printf("Enter a Number:");
scanf("%d",&value);
root=insert(root,value);
break;
case 3:
printf("Enter a Number:");
scanf("%d",&search);
root=insert(root,search);
break;
case 4:
printf("\n");
inorderTraversal(root);
printf("\n");
break;
case 5:
printf("\n");
preorderTraversal(root);
printf("\n");
break;
case 6:
printf("\n");
postorderTraversal(root);
printf("\n");
break;
case 7:
printf("Enter a Number to be deleted:");
scanf("%d",&key);
deleteNode(root,key);
break;
default:
printf("Invalid option!");
}
}
while(ch!=8);
return 0;
}
