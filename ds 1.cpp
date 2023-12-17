#include<iostream>
using namespace std;
void Traverse(int arr[]);
void Insert(int arr[]);
void Delete(int arr[]);
void Search(int arr[]);
int main()
{
	int arr[]={6,9,7,4,1,0,11,15,16};
	int choice;
	cout << "Menu:\n1. Traverse\n2. Insert\n3. Delete\n4. Search\n5. Exit";
	cout<<"\nEnter the choice:";
	cin>>choice;
	while(1)
	{
		switch(choice)
		{
				case 1:
					void Traverse(int arr[]);
					break;
				case 2:
					void Insert();
					break;
				case 3:
					void Delete();
					break;
				case 4:
					void Search();
					break;
				case 5:exit(0);
				default:
					cout << "Invalid choice.";
					break;
		}
	}
}
void Traverse(int arr[])
{
	int len=sizeof(arr);
	cout << "Array elements: ";
        for (int i = 0; i < len; i++) 
		{
            cout << arr[i] << " ";
		}
}
void Insert(int arr[])
{
	
}
void Delete(int arr[])
{
	
}
void Search(int arr[])
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
