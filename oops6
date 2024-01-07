#include<iostream.h>
#include<string.h>
#include<conio.h>
class str
{
char a[30];
public:
str(const char*s)
{
strcpy(a,s);
}
str(const char*s1,const char*s2)
{
strcpy(a,s1);
strcpy(a,s2);
}
void put()
{
cout<<"the string:"<<a<<endl;
}
~str()
{
cout<<"\nstring destroyed";
}
};
int main()
{
clrscr();
cout<<"\t\tCONSTRUCTOR AND DESTRUCTOR";
char p[30],q[30];
cout<<"\nenter two string:";
cin>>p>>q;
str a(p),b(p,q);
a.put();
b.put();
getch();
return 0;
}
