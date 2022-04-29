#include<iostream.h>
#include<conio.h>
class student
{
  private:
	  int rollno;
	  char name[20];
  public:
	  void getinfo();
	  void show();
};
class mark
{
protected:
	   int m1,m2,m3;
public:
	   void getdata();
	   void display();
};
class result:public student,public mark
{
private:
	 int total;
public:
	 void gettotal();
	 void showtotal();
};
void student::getinfo()
{
cout<<"Enter Student Roll No:";
cin>>rollno;
cout<<"Enter student name:";
cin>>name;
}
void mark::getdata()
{
cout<<"Enter 1st Subject Marks:-";
cin>>m1;
cout<<"Enter 2nd Subject Marks:-";
cin>>m2;
cout<<"Enter 3rd Subject Marks:-";
cin>>m3;
}
void student::show()
{
cout<<"Roll No:-:"<<rollno<<endl;
cout<<"Student Name:-"<<name<<endl;
cout<<"*******************************"<<endl;
}
void mark::display()
{
cout<<"1st Subject Mark:-"<<m1<<endl;
cout<<"2nd Subject Mark:-"<<m2<<endl;
cout<<"3rd Subject Mark:-"<<m3<<endl;
}
void result::gettotal()
{
getinfo();
gettotal();
total=m1+m2+m3;
}
void result::showtotal()
{
show();
display();
cout<<"Total marks:-"<<total<endl;
}
void main()
{
clrscr();
result r;
r.gettotal();
r.showtotal();
}
