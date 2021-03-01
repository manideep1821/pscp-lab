#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter the number : ";
    cin>>n;
    int m,i=1;
    int count=0,count1=0;
    while(n>0)
    {
        m=n%2;
        n=n/2;
        sum=sum+m*i;
        i=i*10;
    }
    cout<<"the binary number is "<<sum<<endl;
    while(sum>0)
    {
        m=sum%10;
        sum=sum/10;
        if(m==0)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    cout<<"the number of zeros : "<<count<<endl;
     cout<<"the number of ones :  "<<count<<endl;


}
