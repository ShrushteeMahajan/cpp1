#include<iostream.h>
#include<conio.h>
class art
{
protected:
char name[20];
int marks;
public:
void geta()
{
cout<<"\n enter the name of arts students\n";
cin>>name;
cout<<"\n enter the marks of arts students\n";
cin>>marks;
}
};
class science:public art
{
protected:
char name1[20];
int marks1;
public:
void getb()
{
cout<<"\n enter the name of science students\n";
cin>>name1;
cout<<"\n enter the marks of science students\n";
cin>>marks1;
}
};
class comma
{
protected:
char name2[20];
int marks2;
public:
void getc()
{
cout<<"\n enter the name of commerce students\n";
cin>>name2;
cout<<"\n enter the marks of commerce students\n";
cin>>marks2;
}
};
class result:public science,public comma
{
public:
void display();
};
void result::display()
{
geta();
getb();
getc();
cout<<"\n name of arts students"<<name;
cout<<"\n marks of arts students\n"<<marks;
cout<<"\n name of science students\n">>name1;
cout<<"\n marks of science students\n">>marks1;
cout<<"\n name of commerce students\n">>name2;
cout<<"\n marks of commerce students\n">>marks2;
getch();
}
void main()
{
clrscr();
result r;
r.display();
getch();
}



