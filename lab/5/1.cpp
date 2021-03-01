#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of stations : ";
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    for(int i=0;i<n;i++)
    {
        int r=a[i];
        int k=1;
        for(int j=i+1;j<n;j++)
        {
           if(r-k>=0)
           {
                b[j]=b[j]+r-k;
                k++;
           }
        }
        int m=1;
        for(int k=i-1;k>=0;k--)
        {
           if(r-m>=0)
           {
                b[k]=b[k]+r-m;
                m++;
           }
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }

}
