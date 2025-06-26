#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
int data;
struct tree *lchild,*rchild;
}node;
node *root=NULL;
void insertion(int);
void inorder(node *);
void preorder(node *);
void postorder(node *);
void main()
{
int ch,item;
node *new;
while(1)
{
 printf("\n1:INSERTION\n2:IN ORDER\n3:PRE ORDER");
 printf("\n4:POST ORDER\n5:EXIT");
 printf("\nEnter Your Choice=");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("\nEnter a Key For Insertion=");
 scanf("%d",&item);
 insertion(item);
 break;
 case 2:printf("\nElements In In-Order Traversal Is:");
 inorder(root);
 break;
 case 3:printf("\nElements In Pre-Order Traversal Is:");
 preorder(root);
 break;
 case 4:printf("\nElements In Post-Order Traversal Is:");
 postorder(root);
 break;
 case 5:exit(0);
 }
}
}
void insertion(int item)
{
node *ptr,*p1,*new;
ptr=root;
while(ptr!=NULL)
{
p1=ptr;
if(item<ptr->data)
ptr=ptr->lchild;
else if(item>ptr->data)
ptr=ptr->rchild;
else
{
printf("\nKey Already Exist");
return;
}
}
new=(node*)malloc(sizeof(node));
new->data=item;
new->lchild=NULL;
new->rchild=NULL;
if(root!=NULL)
{
if(item<p1->data)
p1->lchild=new;
else
p1->rchild=new;
}
else
root=new;
}
void inorder(node *ptr)
{
if(ptr!=NULL)
{
inorder(ptr->lchild);
printf("\t%d",ptr->data);
inorder(ptr->rchild);
}
}
void preorder(node *ptr)
{
if(ptr!=NULL)
{
printf("\t%d",ptr->data);
preorder(ptr->lchild);
preorder(ptr->rchild);
}
}
void postorder(node *ptr)
{
if(ptr!=NULL)
{
postorder(ptr->lchild);
postorder(ptr->rchild);
printf("\t%d",ptr->data);
}
}