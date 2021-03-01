#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int pro=0;
    cout<<"enter the two numbers :"<<endl;
    cin>>n>>m;
    int temp=m;
    int r=n;
    while(r>1)
    {
        r=n/2;
        n=r;
        m=m*2;
    }

    pro=temp+m;
    cout<<"the product of two numbers is :"<<pro;
}
