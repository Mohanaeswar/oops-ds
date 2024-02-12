#include<iostream.h>
#include<conio.h>
class media
{
protected:
char title[50];
float price;
public:
virtual void display()=0;
};
class book:public media
{
int pages;
public:
void getbook()
{
cout<<"\nenter the book name:";
cin>>title;
cout<<"\nenter the price of book:";
cin>>price;
cout<<"\nenter the no of pages in the books:";
cin>>pages;
}
void display();
};
class tape:public media
{
float time;
public:
void gettape()
{
cout<<"\nenter the tape name:";
cin>>title;
cout<<"\nenter the price of the tape:";
cin>>price;
cout<<"\nenter the playtime:";
cin>>time;
}
void display();
};
void book::display()
{
cout<<"\n\nbook title:"<<title;
cout<<"\ntotal pages:"<<pages;
cout<<"\nbook price:"<<price;
}
void tape::display()
{
cout<<"\n\ntape title:"<<title;
cout<<"\ntotal playtime:"<<time;
cout<<"\ntape price:"<<price;
}
int main()
{
clrscr();
cout<<"\nVIRTUAL FUNCTION";
book b;
b.getbook();
tape t1;
t1.gettape();
media*m;
m=&b;
m->display();
m=&t1;
m->display();
getch();
return 0;
}
