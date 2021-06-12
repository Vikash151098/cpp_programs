#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
char var;
ifstream inf;
inf.open("file1");
ofstream outf;
outf.open("file2");
while(inf.eof()==0)
{
inf.get(var);
outf.put(var);
}
cout<<var;
 getch();
 }





