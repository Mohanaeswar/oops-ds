#include<iostream>
using namespace std;

int arr[]={6,9,7,4,1,0,11,15,16};
int len=sizeof(arr)/sizeof(arr[0]);

void Traverse();
void Insert();
void Delete();
void Search();
int main()
{	
	int choice,index,value;
	while(1)
	{
		cout << "\nMenu:\n1. Traverse\n2. Insert\n3. Delete\n4. Search\n5. Exit";
		cout<<"\nEnter the choice:";
		cin>>choice;
		switch(choice)
		{
				case 1:
					Traverse();
					break;
				case 2:
					Insert();
					break;
				case 3:
					Delete();
					break;
				case 4:
					Search();
					break;
				case 5:exit(0);
				default:
					cout << "Invalid choice.";
					break;
		}
	}
	return 0;
}
void Traverse()
{
	cout << "Array elements: ";
        for (int i = 0; i < len; i++) 
		{
            cout << arr[i] << " ";
		}
}
void Insert()
{
	int index,value;
	cout<<"\nEnter the position for the new element:";
	cin>>index;
	cout<<"\nEnter the element to be inserted:";
	cin>>value;
	for(int i=len;i>=index-1;i--)
	{
		arr[i+1]=arr[i];	
	}	
	arr[index-1]=value;
		len=len+1;
}
void Delete()
{
	int index,value;
	cout<<"\nEnter the position of the element to be deleted:";
	cin>>index;
	value=arr[index];
	for(int i=index;i<len;i++)
	{
		arr[i]=arr[i+1];
	}
	len=len+1;
	cout<<"\nThe deleted element is:"<<value;		
}
void Search()
{
	int element;
	int len=sizeof(arr);
	cout<<"enter the element to be found";
	cin>>element;
	for (int i = 0; i < len; i++)
	{
	if (arr[i]==element)
	{
		cout<<"Element found"<<endl<<"location:"<<i;
	}
	else
	{
		cout<<"Element not found";
	}
	}
}
