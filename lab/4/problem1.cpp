#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the limit value :"<<endl;
    cin>>n;

    cout<<"enter the starting value :"<<endl;
    cin>>m;

    int i=1;
    cout<<"The Collatz Sequence is:"<<endl;
    cout<<m<<"> ";
    while(i<n)
    {
       if(m%2==0)
       {
           m=m/2;
           cout<<m<<"> ";
       }
       else
       {
           m=m*3+1;
           cout<<m<<"> ";
       }
       i++;
    }
    return 0;
}

