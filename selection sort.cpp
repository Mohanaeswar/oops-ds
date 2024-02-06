#include<iostream>
using namespace std;
class selection
{
	int a[10],n;
	public:
		selection();
		void sort();
};
selection::selection()
{
	cout<<"\nNumber of elements:";
	cin>>n;
	cout<<"\nElements:";
	for (int i=0; i<n;i++)
	cin>>a[i];
}
void selection::sort()
{
	int key,pos,i,j,k,t;
	for (i=0;i<n-1;i++)
	{
		key = a[i]; pos=i;
		for(j=j+1;j<n;j++)
		if(key>a[j])
		{ 
		key = a[j]; pos = j;
		}
		t=a[j]; a[i]=key; a[pos]=t;
		cout<<"\nPass"<<i+1<<":";
		for(k=0; k<n; k++)
		cout<<" "<<a[k];
	}
}
int main()
{
	cout<<"\nSelection Sort";
	selection s;
	s.sort();
}
