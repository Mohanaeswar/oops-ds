#include<iostream>
#include<cstring>
using namespace std;
class stud
{
	int rollno,m1,m2,m3,m4,m5,total;
	float avg;
	char name[20],grade[20];
	public:void getdata();
	void calculate();
	void display();
};
void stud::getdata()
{
	cout<<"\nEnter the roll no:";
	cin>>rollno;
	cout<<"\nEnter the name:";
	cin>>name;
	cout<<"\nEnter the 5 marks:";
	cin>>m1>>m2>>m3>>m4>>m5;
}
void stud::calculate()
{
	if((m1>40)&&(m2>40)&&(m3>40)&&(m4>40)&&(m5>40))
	{
		total=m1+m2+m3+m4+m5;
		avg=total/5;
		if (avg>=60)
		{
			strcpy(grade,"\n First class");
		}
		else if(avg>50 && avg<=60)
		{
			strcpy(grade,"\n Second class");
		}
		else
		{
			strcpy(grade,"\n Third class");
		}
	}
}
void stud::display()
{
	cout<<"\nName:"<<name;
	cout<<"\nRoll no:"<<rollno;
	cout<<"\nMarks:"<<m1<<"\n"<<m2<<"\n"<<m3<<"\n"<<m4<<"\n"<<m5;
	if((m1>40)&&(m2>40)&&(m3>40)&&(m4>40)&&(m5>40))
	{
		cout<<"\nTotal:"<<total;
		cout<<"\nAverage:"<<avg;
		cout<<"\nGrade:"<<grade;
	}
	else
	{
		cout<<"\nGrade: Fail";
	}
}
int main()
{
	stud s;
	cout<<"\nStudent mark statement:";
	s.getdata();
	s.calculate();
	s.display();
	return 0;
}
