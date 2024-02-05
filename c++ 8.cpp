#include<iostream>
using namespace std;
class complex
{
	float x,y;
	public:
	void getdata()
	{
		cout<<"\nEnter the two float values:";
		cin>>x>>y;
	}
	void putdata()
	{
	if(y>0)
		cout<<x<<"+j"<<y<<endl;
	else
	{
		y = -y;
		cout<<x<<"-j"<<y<<endl;
	}
}
complex operator +(complex);
friend complex operator -(complex, complex);
};
complex complex::operator +(complex c)
{
	complex t;
	t.x=x+c.x;
	t.y=y+c.y;
	return t;
}
complex operator -(complex t1, complex t2)
{
	complex t3;
	t3.x = t1.x - t2.y;
	t3.y = t1.y - t2.y;
	return t3;
}
int main()
{
	cout<<"\t\t Binary Operator Overloading";
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3 = c1+c2;
	cout<<"Addition of two complex numbers\n";
	c3.putdata();
	c3 = c1-c2;
	cout<<"Subtraction of two complex numbers\n";
	c3.putdata();
	return 0;
}
