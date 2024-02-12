#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
int main()
{
clrscr();
cout<<"\n\t\tSIMPLE FILE ORIENTATION GET()&PUT()";
char str[80];
char ch;
cout<<"\nenter string:";
cin.getline(str,80);
int len=strlen(str);
fstream file;
file.open("ADDFILE",ios::in|ios::out|ios::app);
for(int i=0;i<len;i++)
{
file.put(str[i]);
}
file.seekg(0);
while(file)
{
file.get(ch);
cout<<(ch);
}
getch();
return 0;
}
