#include<iostream>
using namespace std;
int main()
{
    int a ,b,c;
    cout<<"enter the three numbers : "<<endl;
    cin>>a>>b>>c;
    if(a>b&&a<c||a<b&&a>c)
    {
        cout<<a<<"is the second largest"<<endl;
    }
    else if(b>a&&b<c||b<a&&b>c)
    {
        cout<<b<<"is the second largest"<<endl;
    }
    else
    {
        cout<<c<<"is the second largest"<<endl;
    }
}
