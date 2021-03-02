#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,r,i=1;
    cout<<"enter the number : ";
    cin>>n;
    while(n>0)
    {
        r=n%8;
        sum=sum+r*i;
        n=n/8;
        i=i*10;
    }
    cout<<"the number  in octal representation is : "<<sum;
    return 0;

}
