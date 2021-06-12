#include<iostream.h>
#include<conio.h>
class student
{
protected:
char name[30],branch[20];
long int rollno;
int classname;
public:
void getdata()
{
cout<<"enter name,branch,rollno,classname "<<endl;
cin>>name>>branch>>rollno>>classname;
}
void display()
{
cout<<"\nname:-"<<name<<endl;
cout<<"branch:-"<<branch<<endl;
cout<<"roll no:-"<<rollno<<endl;
cout<<"classname:-"<<classname<<endl;
}
};
class marks:public student
{
protected:float  m1,m2,m3;
float per;
public:
void getmarks()
{
cout<<"\nmarks in math  ";
cin>>m1;
cout<<"marks in physics  ";
cin>>m2;
cout<<"marks in chemistry  ";
cin>>m3;
}
void dispmarks()
{

cout<<"\nmarks in math is :"<<m1<<endl;
cout<<"marks in physics is :"<<m2<<endl;
cout<<"marks in chemistry is :"<<m3<<endl;
per=(m1+m2+m3)/3;
cout<<"your percentage is :"<<per;
}
};
void main()
{
clrscr();
student b1;
marks b2;
marks *p;
p=&b2;
p->getdata();
p->getmarks();
p->display();
p->dispmarks();

getch();
}

