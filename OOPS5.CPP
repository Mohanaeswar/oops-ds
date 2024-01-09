#include<iostream.h>
#include<conio.h>
class sample
{
	int a;
	public:
		void get();
		void put();
		friend void exchange(sample&s1,sample&s2);
};
void exchange(sample&s1,sample&s2)
{
	int t = s1.a;
	s1.a = s2.a;
	s2.a = t;
}
void sample::get()
{
	cout<<"\nEnter an int value:";
	cin>>a;
}
void sample::put()
{
	cout<<"\nThe value:"<<a<<endl;
}
void main()
{
	clrscr();
	cout<<"\n\tSWAPPING OF VALUES";
	sample x,y;
	x.get();
	y.get();
	cout<<"\nBefore Swapping\n";
	x.put();
	y.put();
	cout<<"\nAfter Swapping\n";
	exchange(x,y);
	x.put();
	y.put();
	getch();
}
