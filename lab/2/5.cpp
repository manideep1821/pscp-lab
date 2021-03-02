#include<iostream>
using namespace std;
int main()
{
    int c,k,d;
    cout<<"enter the cost price : ";
    cin>>c;
    cout<<"enter the mark price : ";
    cin>>k;
    cout<<"enter the discount : ";
    cin>>d;
    float check=k*(100-d)/100;
    if(c<check)
    {
        cout<<"profit is  : "<<check-c;
    }
    else
    {
        cout<<"loss is  : "<<c-check;
    }
    return 0;

}
