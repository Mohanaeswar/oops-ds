#include<iostream>
using namespace std;
int main()
{
	cout<<"Insertion Sort\n";
	int n, a[50], i, pos, key;
	cout<<"\nNumber of Elements:";
	cin>>n;
	cout<<"Elements:";
	for(i=1; i<=n; i++)
		cin>>a[i];
	cout<<"\nPass 1:";
	for (int j=1; j<=n; j++)
		cout<<"\t"<<a[j];
	for (int i=2; i<=n; i++)
	{ 
	 key = a[i]; pos=i;
	 while((pos>1)&&(a[pos-1]>=key))
	 {
	 	a[pos]=a[pos-1];
	 	pos=pos-1;
	 	a[pos] = key;
	 }
	cout<<"\nPass "<<i<<":";
	for(int j=1; j<=n; j++)
		cout<<"\t"<<a[j];
	}
}
