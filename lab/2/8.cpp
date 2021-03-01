#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three numbers : "<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        if(a%2==0)
        {
            cout<<"the greatest number is "<< a <<" even"<<endl;
        }
        else
        {
            cout<<"the greatest number is "<< a <<" odd"<<endl;
        }
    }
    else if(b>a&&b>c)
    {
        if(b%2==0)
        {
            cout<<"the greatest number is "<< b <<" even"<<endl;
        }
        else
        {
            cout<<"the greatest number is "<< b <<" odd"<<endl;
        }
    }
    else
    {
        if(b%2==0)
        {
            cout<<"the greatest number is "<< c <<" even"<<endl;
        }
        else
        {
            cout<<"the greatest number is "<< c <<" odd"<<endl;
        }
    }
}
