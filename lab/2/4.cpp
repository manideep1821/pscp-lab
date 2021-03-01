#include<iostream>
using namespace std;
int main()
{
    int number,i,b,sum =0;
  cout<<"enter the number"<<endl;
    cin>>number;
    for(i=1;i<=number;i++)
    {
        b=i*i;
        sum=sum+b;

    }

cout<<sum;
}
