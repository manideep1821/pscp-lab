#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cout<<"enter the number of values : "<<endl;
    cin>>n;
    int i=1;
    int a=0;
    int b=0;
    while(i<=n)
    {
        cout<<"enter the number :"<<endl;
        cin>>num;
        if(num>a)
        {
            b=a;
            a=num;
        }
        else if(num>b)
        {
            b=num;
        }
        i++;

    }
    cout<<"the second largest of all numbers is "<<b<<endl;

    return 0;
}
