#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
char sname[30];
int roll;
float fee;
cout<<"enter name,roll,fee :"<<endl;
cin>>sname;
cin>>roll>>fee;
ofstream output("file1");
output<<sname<<"\n";
output<<roll<<"\n";
output<<fee<<"\n";
output.close();
ifstream input("file1");
input>>sname;
input>>roll;
input>>fee;
cout<<"name is"<<sname<<endl;
cout<<"roll no is"<<roll<<endl;
cout<<"fee is"<<fee<<endl;
getch();
}