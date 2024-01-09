#include<iostream.h>
#include<string.h>
#include<conio.h>
class str
{
char a[30];
public:
    str(const char* s)
    {
	strcpy(a, s);
    }

    str(const char* s1, const char* s2)
    {
	strcpy(a, s1);
	strcpy(a, s2);
    }
void put()
{
cout << "The string: " << a << endl;
}
~str()
{
cout << "\nString destroyed";
}
};
void main()
{
clrscr();
cout << "\t\tCONSTRUCTOR AND DESTRUCTOR";
char p[30], q[30];
cout << "\nEnter two strings: ";
cin >> p >> q;
str a(p);
str b(p, q);
a.put();
b.put();
getch();
}