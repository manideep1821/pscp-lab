#include<iostream>
using namespace std;
int main()
{
    int a=1189;
    int b=841;
    cout<<a<<" x "<<b<<endl;
    for(int i=1;i<8;i++)
    {
       if(a>b)
       {
           a=a/2;
            cout<<b<<" x "<<a<<endl;
       }
       else
       {
           b=b/2;
        cout<<a<<" x "<<b<<endl;
       }

    }
    return 0;
}
