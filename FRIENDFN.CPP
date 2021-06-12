#include<iostream.h>
#include<conio.h>
class add
{
int a,b;
public:
void get();
friend void  sum(add s);
};
void add::get()
{
cout<<"enter any two no:"<<endl;
cin>>a>>b;
}
void sum(add s)
{
int c;
c=s.a+s.b;
cout<<"sum is :"<<c<<endl;
}
void main()
{
clrscr();
add obj;
obj.get();
sum(obj);
getch();
}