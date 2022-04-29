#include<iostream.h>
#include<conio.h>
class demo
{
 int x,y,z;
 public:
     void get();
     void show();
     void operator-();
     void operator+();
 };
       void demo::get()
 {
     cout<<"\nEnter the no";
     cin>>x>>y>>z;
 }
      void demo::show()
 {
   cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z;
 }
     void demo::operator-()
 {
      x=-x;
      y=-y;
      z=-z;
 }  void demo::operator+()
 {
     x=+x;
     y=+y;
     z=+z;
 }
      void main()
 {
 clrscr();
 demo d;
 d.get();
     cout<<"\nBefore function call\n";
     d.show();
     -d;
     cout<<"\nAfter function call on - operator\n";
     d.show();
     +d;
     d.get();
     cout<<"\nAfter function call on+ operator\n";
     d.show();
     getch();
     }

