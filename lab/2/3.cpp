#include<iostream>
using namespace std;
int main()
{
    int n,number,sum=0;
    float avg;
    cout<<"enter the number : "<<endl;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cout<<"enter the number : "<<endl;
        cin>>n;
        sum=sum+n;
    }
    avg=sum/n;
    cout<<"the average is : "<<avg;

 return 0;
}
