#include<iostream.h>
#include<stdlib.h>
#include<conio.h> 
class linear
{
int n,x,a[10],flag,pos;
public:
linear();
void find();
};
linear::linear()
{
cout<<"\nEnter the number of elements:"; 
cin>>n;
cout<<"\nEnter "<<n<<" Element:";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the element to be searched:";
cin>>x;
}
void linear::find()
{
flag=0;
for(int i=0;i<n;i++)
{
if(a[i]==x)
{
pos=i+1;
flag++;
}
}
if(flag>0)
cout<<"\nElement "<<x<<" is at position:"<<pos;
else
cout<<"\nElement not found";
}
int main()
{
clrscr();
cout<<"\n\t\tLINEAR SERACH";
linear l;
l.find();
return 0;
getch();
}
