#include<iostream.h>
#include<conio.h>
class unary
{
int a;
float b;
public:
void getdata()
{
cout<<"\nenter an integer value:";
cin>>a;
cout<<"\nenter the float value:";
cin>>b;
}
void putdata()
{
cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
}
void operator++()
{
++a;
++b;
}
void operator--()
{
--a;
--b;
}
void operator-()
{
a=-a;
b=-b;
}
};
int main()
{
clrscr();
cout<<"\n\t\tUNARY OPERATOR OVERLOADING";
unary u;
u.getdata();
cout<<"\npre-decreament operator overloading\n";
--u;
u.putdata();
cout<<"unary minus operator overloading\n";
-u;
u.putdata();
cout<<"pre-increament operator overloading\n";
++u;
u.putdata();
getch();
23
return 0;
}
