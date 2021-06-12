#include<iostream.h>
#include<conio.h>
class sample
{
int a,b;
public:
void get()
{
cout<<"enter two no:"<<endl;
cin>>a>>b;
}
void disp()
{
cout<<"no is:"<<a<<" "<<b<<endl;
}
};
void main()
{
clrscr();
sample s1;
sample *p;
s1.get();
s1.disp();
p->get();
p->disp();
getch();
}