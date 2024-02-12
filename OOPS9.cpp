#include<iostream.h>
#include<conio.h>
class student
{
protected:
int rollnum;
public:
void getnum()
{
cout<<"\nenter the roll number:";
cin>>rollnum;
}
void putnum()
{
cout<<"\nroll no:"<<rollnum;
}
};
class test:public student
{
protected:
float mark1,mark2;
public:
void getmarks()
{cout<<"\nenter mark1(<=50):";
cin>>mark1;
cout<<"\nenter mark2(<=50):";
cin>>mark2;
}
void putmarks()
{
cout<<"\nmark1:"<<mark1;
cout<<"\nmark2:"<<mark2;
}
};
class sports
{
protected:
float score;
public:
void getscore()
{
cout<<"\nenter the score(0-10):";
cin>>score;
}
void putscore()
{
cout<<"\nscore:"<<score;
}
};
class result:public test,public sports
{
float total;public:
void display();
};
void result::display()
{
getnum();
getmarks();
getscore();
total=mark1+mark2+score;
putnum();
putmarks();
putscore();
cout<<"\ntotal:"<<total;
if(total<50)
cout<<"\nthe student is fail";
else
cout<<"\nthe student is pass";
}
int main()
{
clrscr();
cout<<"\n\tHYBRID INERITANCE\n";
result r;
r.display();
getch();
return 0;
}
