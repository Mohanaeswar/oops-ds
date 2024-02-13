#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left,*right;
};
struct node*root=NULL;
struct node*create(int data)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->left=NULL;
newnode->right=NULL;
return(newnode);
}
void insertion(struct node**node,int data)
{
if(!*node)
*node=create(data);
else if(data<=(*node)->data)
insertion(&(*node)->left,data);
else if(data>=(*node)->data)
insertion(&(*node)->right,data);
}
void inorder(struct node*node)
{
if(node)
{
inorder(node->left);
cout<<node->data<<" ";
inorder(node->right);
}
}
int main()
66
{
clrscr();
cout<<"\n\t\tTREE TRAVERSAL INORDER";
int data,n;
cout<<"\nHOW MANY NODES?\n";
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<"\nenter the data:";
cin>>data;
insertion(&root,data);
}
cout<<"\nthe inorder traversal is:";
inorder(root);
return 0;
}
