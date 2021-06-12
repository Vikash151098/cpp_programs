#include<iostream.h>
#include<conio.h>
class student
{
protected:int rollno,classname;
char name[30],branch[20];
public:
void
getdata()
{
cout<<"\nenter name,branch,rollno,classname: "<<endl;
cin>>name>>branch>>rollno>>classname;
}
void disp()
{
cout<<"\nname is:"<<name<<endl;
cout<<"branch is"<<branch<<endl;
cout<<"rollno is"<<rollno<<endl;
cout<<"classname"<<classname<<endl;
}
};
class marks:public student
{
protected:float m1,m2,m3;
public:
void get_m()
{
cout<<"\nmarks in math:"<<endl;
cin>>m1;
cout<<"marks in physics:"<<endl;
cin>>m2;
cout<<"marks in chemistry:"<<endl;
cin>>m3;
}
void display()
{
cout<<"\nmarks in math: "<<m1<<endl;
cout<<"marks in math: "<<m2<<endl;
cout<<"marks in math: "<<m3<<endl;

}
};
class sports
{
protected:float m4;

public:
void get_s()
{
cout<<"\nenter marks in sports: "<<endl;
cin>>m4;
}
void disp_s()
{
cout<<"marks in sports: "<<m4<<endl;
}
};
class total:public marks,public sports
{
protected:
float per;
public:
void percentage()
{
per=(m1+m2+m3+m4)/4;
cout<<"percentage in all subject is: "<<per;
}
};
void main()
{
clrscr();
total obj;
total *p=new total;
p=&obj;

p->getdata();
p->get_m();
p->get_s();
cout<<"detail of student: "<<endl;
p->disp();
p->display();
p->disp_s();
p->percentage();
getch();
}



