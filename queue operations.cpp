#include<iostream.h>
#include<conio.h>
#define max 5
class queue
{
	int a[max];
	int front, rear;
	public:
		queue()
		{
			front=rear=-1;
		}
		void insertion();
		void deletion();
		void display();
};
void queue::insertion()
{
	int x;
	if (rear == max-1)
	cout<<"\nQueue is full";
	else
	{
		cout<<"\nElement:";
		cin>>x;
		if((front==-1)&&(rear==-1))
		front=rear=0;
		else
		rear=rear+1;
		a[rear]=x;
		cout<<"\nFront="<<front<<"\tRear="<<rear;
	}
}
void queue::deletion()
{
	if((front==-1)&&(rear==-1))
	cout<<"\nQueue is empty";
	else
	{
		int b=a[front];
		if(front==rear)
		front=rear=-1;
		else
		front=front+1;
		cout<<"\nDeleted element is:"<<b<<endl;
		cout<<"\nFront="<<front<<"\tRear="<<rear;
	}
}
void queue::display()
{
	if((front==-1)&&(rear==-1))
	cout<<"\nQueue is empty";
	else
	{
		cout<<"\nElements in queue are:";
		for(int i=front;i<=rear;i++)
		cout<<a[i]<<endl;
	}
}
int main()
{
  clrscr();
	cout<<"Queue implementation using Array";
	int choice;
	queue q;
	while(1)
	{
		cout<<"\n1. Insertion\n2. Deletion\n3. Display\n4. Exit";
		cout<<"\nChoice:";
		cin>>choice;
		switch(choice)
		{
			case 1:q.insertion();break;
			case 2:q.deletion();break;
			case 3:q.display();break;
			case 4:exit(0);
			default: cout<<"\nInvalid Choice";
		}
	}
	return 0;
  getch();
}
