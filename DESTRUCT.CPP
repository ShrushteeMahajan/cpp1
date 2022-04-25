#include<iostream.h>
#include<conio.h>
class demo
{
	private:
					int a,b;
	public:
					~demo();
};
demo::~demo()
{
cout<<"Desctructor called";
}
demo::demo()
{
cout<<"Constructor called";
}
main()
{
clrscr();
demo d;
getch();
}



