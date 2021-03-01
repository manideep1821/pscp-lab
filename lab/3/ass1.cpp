#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    float r,theta,p,k;



    cout<<"Enter the co-ordinate points (x, y): "<<endl;
    cin>>x>>y;


    r = sqrt(x*x + y*y);

    theta = atan(y/x);
    p=3.14;
    k =(180/p)*theta;

    cout<<"the polar coordinates of  "<<  x<<"  and"<<  y<<"  are"<<  r<<"  and"<<  k;




}
