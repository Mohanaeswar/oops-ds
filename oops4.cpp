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
	cout<<"\nEnter the side of square";
	cin>>side;
	cout<<"\nArea of square:"<<side*side;
}
void over::area(float l, float b)
{
	cout<<"\nEnter the length & breadth:";
	cin>>l>>b;
	cout<<"\nArea of rectangle:"<<l*b;
}
void over::area(float r)
{
	cout<<"\nEnter the radius value:";
	cin>>r;
	cout<<"\nArea of circle:"<<3.14*r*r;
}
int main()
{
	clrscr();
	int side;
	float l,b,r;
	cout<<"\t\t\nFunction Overloading:";
	over o;
	o.area(side);
	o.area(l,b);
	o.area(r);
	return 0;
	getch();
}
