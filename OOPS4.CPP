#include<iostream.h>
#include<conio.h>
class over
{
	int side;
	float l,b,r;
	public:
		void area(int);
		void area(float,float);
		void area(float);
};
void over::area(int side)
{
	cout<<"\nEnter the side of square:";
	cin>>side;
	cout<<"Area of square:"<<side*side<<endl;
}
void over::area(float l, float b)
{
	cout<<"\nEnter the length & breadth:";
	cin>>l>>b;
	cout<<"Area of rectangle:"<<l*b<<endl;
}
void over::area(float r)
{
	cout<<"\nEnter the radius value:";
	cin>>r;
	cout<<"Area of circle:"<<3.14*r*r<<endl;
}
void main()
{
	clrscr();
	int side;
	float l,b,r;
	cout<<"\t\tFunction Overloading";
	over o;
	o.area(side);
	o.area(l,b);
	o.area(r);
	getch();
}
