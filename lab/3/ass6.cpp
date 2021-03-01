#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x,y,r;
    float a;
    cout<<"enter the coordinates of circle (x,y) :"<<endl;;
    cin>>x>>y;
    cout<<"enter the radius :";
    cin>>r;
    a=sqrt(x*x+y*y);
    if(a==r)
    {
        cout<<" the given coordinates lies on the circle ";
    }

    else if(a>r)
    {
        cout<<" the given coordinates lies outside the circle";
    }
    else
    {
        cout<<"the given coordinates lies outside the circle ";
    }

}
