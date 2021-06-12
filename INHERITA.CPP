#include<iostream.h>
#include<conio.h>
class b
{
protected:int a,b,c;
public:
void getdata()
{
cout<<"enter any two no: "<<endl;
cin>>a>>b;
}
void disp()
{
c=a+b;
cout<<"sum is:"<<c<<endl;
}
};
class d:public b
{
protected:int x,sum;
public:
void get()
{
cout<<"enter any no :"<<endl;
cin>>x;
}
void add()
{
sum=a+b+x;
}
void display()
{
cout<<" overall sum is: "<<sum;
}
};
void main()
{
clrscr();
b obj;
d obj1;
obj.getdata();
obj.disp();
obj1.getdata();
obj1.get();
obj1.add();
obj1.display();
getch();
}