#include<iostream>
using namespace std;
int main()
{
    int n,m,p;
    cout<<"enter the number :  ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=1;
        }
    }
    cout<<"enter the position : ";
    cin>>m;
    cout<<"enter the value to place : ";
    cin>>p;
    cout<<endl;
    int k=n/2;
    for(int i=k-2;i<=k+2;i++)
    {
        for(int j=k-2;j<=k+2;j++)
        {
            a[i][j]=p;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}
