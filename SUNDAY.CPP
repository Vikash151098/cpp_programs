#include<iostream.h>
#include<conio.h>
void main()
{
int a;
clrscr();
cout<<"\nenter no 0 to 6 to find name of days "<<endl;
cin>>a;
 if(a==0)
cout<<"\nsunday";
else if(a==1)
cout<<"\nmonday";
else if(a==2)
cout<<"\ntuesday";
else if(a==3)
cout<<"\nwednesday";
else if(a==4)
cout<<"\ntrursday";
else if(a==5)
cout<<"\nfriday";
else if(a==6)
cout<<"\nsaturday";
getch();
}