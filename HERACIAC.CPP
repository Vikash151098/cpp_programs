#include<iostream.h>
#include<conio.h>
class info
{
protected:
char name[30],address[100];
long int mob;
public:
void get_info()
{
cout<<"enter the name:"<<endl;
cin>>name;
cout<<"enter the address:"<<endl;
cin>>address;
cout<<"enter the mobile no:"<<endl;
cin>>mob;
}
void disp_info()
{
cout<<"name: "<<name<<endl;
cout<<"address: "<<address<<endl;
cout<<"moblile no: "<<mob<<endl;
}
};
class employe:public info
{
protected:int idno,salary;
public:
void get_emp()
{
cout<<"enter id no:"<<endl;
cin>>idno;
cout<<"enter salary:"<<endl;
cin>>salary;
}
void disp_emp()
{
cout<<"id no: "<<idno<<endl;
cout<<"salary: "<<salary<<endl;
}
};
class student:public info
{
protected:long int rollno,marks;
public:
void get_std()
{
cout<<"enter rollno and marks : "<<endl;
cin>>rollno>>marks;
}
void disp_std()
{
cout<<"rollno is : "<<rollno<<endl;
cout<<"marks is :"<<marks<<endl;
}
};

void main()
{
clrscr();
employe e;
student s;
e.get_info();
e.get_emp();
e.disp_info();
e.disp_emp();
s.get_info();
s.get_std();
s.disp_info();
s.disp_std();


 getch();
 }





