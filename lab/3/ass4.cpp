#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three numbers : "<<endl;
    cin>>a>>b>>c;

    if(a>b)
    {
      if(b>c)
      {
          cout<<a<<">"<<b<<">"<<c;
      }
      else
      {
          cout<<a<<">"<<c<<">"<<b;
      }
    }
    else if(b>c)
    {
      if(a>c)
      {
          cout<<b<<">"<<a<<">"<<c;
      }
      else
      {
          cout<<b<<">"<<c<<">"<<a;
      }
    }
    else if(c>a)
    {
      if(b>a)
      {
          cout<<c<<">"<<b<<">"<<a;
      }
      else
      {
          cout<<c<<">"<<a<<">"<<b;
      }
    }

}
