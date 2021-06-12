#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i;
int num[5][4],sum=0;
cout<<"\nenter five number: "<<endl;

for(i=0;i<5;++i)
for(j=
0;j<4;++j)
{
cin>>num[i];
sum+=num[i];
}
cout<<"the sum is: "<<sum<<endl;
 getch();
 }
