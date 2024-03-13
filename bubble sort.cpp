#include<iostream>
using namespace std;

class bubble
{
	int a[10],n,t;
	public:
		bubble();
		void bsort();
		void display();
};
bubble::bubble()
{
	cout<<"\nNumber of Elements:";
	cin>>n;
	cout<<"\nElements:";
	for (int i=0; i<n; i++)
		cin>>a[i]; 
}
void bubble::display()
{
	for (int i=0; i<n; i++)
		cout<<" "<<a[i];
	cout<<endl;
}
void bubble::bsort()
{ 
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++) // Corrected loop condition: j < n-1
        {
            if (a[j]>a[j+1])
            {
                t = a[j];
                a[j]=a[j+1];
                a[j+1] = t;	
            }
        }
        cout<<"\nPass "<<i+1<<":";
        display();
    }
}

int main()
{
	cout<<"Bubble sort";
	bubble b;
	b.bsort();
	b.display();
}
