// programm of the use of static data member.
#include<iostream.h>
#include<conio.h>
class data
{
private:
int a;
static int count;
public:
void getdata()
{
cout<<"enter any number";
cin>>a;
count++;
}
static void showcount()
{
cout<<" count is: "<<count;
}
void show()
{
cout<<"value of a is:"<<a;
}
};
int data::count;
void main()
{
clrscr();
data d1;
data::showcount();
d1.getdata();
data::showcount();
d1.show();

getch();
}