#include<iostream>
using namespace std;
int main()
{
    int n,temp,m,flag=-1;
    cout<<"enter the number : ";
    cin>>n;
    int arr[n];
    cout<<"enter the marks : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"enter the number to check  : ";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            flag=i;
            break;
        }
    }
    cout<<endl;
    if(flag==-1)
    {
        cout<<"marks are not correct ";
    }
    else
    {
        cout<<"the rank is  : "<<flag+1;
    }


}
