#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
ofstream outf;
outf.open("detail of student");
outf<<"welcome"<<"\n";
outf<<"quest"<<"\n";
outf<<"cse"<<"\n";
outf<<"student"<<"\n";
outf.close();
ifstream inf;
inf.open("detail of student");
int i;
char line[80];
for(i=0;i<5;i++)
{
inf.getline(line,80);
cout<<line<<"\n";
}
inf.close();
getch();
}
