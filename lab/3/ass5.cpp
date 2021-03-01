#include<iostream>
using namespace std;
int main ()
{
    int x1,x2,x3,y1,y2,y3,a,b,c,d;
    cout<<"enter the values of(x1,y1) :"<<endl;
    cin>>x1>>y1;
     cout<<"enter the values of(x2,y2) :"<<endl;
    cin>>x2>>y2;
     cout<<"enter the values of(x3,y3) :"<<endl;
    cin>>x3>>y3;
    a=x2-x1;
    b=y2-y1;
    c=x3-x2;
    d=y3-y2;

    if(a/b==c/d)
    {
        cout<<"the given points form a straight line";
    }
    else
    {
        cout<<"the given points doesnot form a straight line";
    }
}
