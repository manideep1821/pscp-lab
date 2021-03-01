#include<iostream>
using namespace std;
int main ()
{
   int a,b,c,d,e,f,g,h,m,n,o,p,q,s;

   cout<<"enter the date of birth :"<<endl;
   cin>>a >>b  >>c ;

       cout<<"enter the date of joining in NITW :"<<endl;
       cin>>d >>e >>f ;

       g=a+b*30+c*365;
       h=d+e*30+f*365;
       m=h-g;
       n=m%365;
       p=m/365;
       o=n%30;
       s=n/30;
       cout<<" I have joined NITW at the age of"<<p<<"years"<<s<<"months"<<o<<"days";



}
