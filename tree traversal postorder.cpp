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
else if(data<(*node)->data)
insertion(&(*node)->left,data);
else if(data>(*node)->data)
insertion(&(*node)->right,data);
}
void postorder(struct node*node)
{
if(node)
{
postorder(node->left);
postorder(node->right);
cout<<node->data<<" ";
}
}
int main()
{
clrscr();
cout<<"\n\t\tTREE TRAVERSAL POSTORDER";
int data,n;
cout<<"\nHOW MANY NODES?\n";
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<"\neneter the data:";
cin>>data;
insertion(&root,data);
}
cout<<"\nthe postorder is:";
postorder(root);
return 0;
}
