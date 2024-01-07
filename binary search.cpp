#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
class binary
{
int n,x,a[10], value,low,high,mid;
public:
binary();
void search();
};
binary::binary()
{ 
cout<<"\n Number of Elements:"; 
cin>>n;
cout<<"\n Elements:";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"\n Element to be searched:"; 
cin>>x;
}
void binary::search()
{
low=0; 
high-n-1;
mid=(low+high)/2;
while((low<=high)&&(a[mid]!=x))
{
if(a[mid]<x)
low-mid+1;
else
high-mid-1;
mid=(low+high)/2;
}
if(a[mid]==x)
cout<<"\n Element found at position"<<mid+1;
else
cout<<"\n Element not found";
}
int main()
{
cout<<"\n Binary Search":
clrscr();
binary b; 
b.search();
return 0;
getch();
}
