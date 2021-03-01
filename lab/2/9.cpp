#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int sum=0;
    while(n>0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
        if(n<10)
        {
            sum=sum+n;
            if(sum<10)
            {
                break;
            }
            else{
                    n=sum;
                sum=0;
            }
        }


    }
    cout<<"the sum is : "<<sum;
}
