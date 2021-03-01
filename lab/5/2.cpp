#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the elements of array : "<<endl;
    int a[10],b[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<10;i++)
    {
        int max =a[9];
        int min=a[0];

           for(int j=i+1;j<10;j++)
           {
               if (a[j]>max)
               {
                   max=a[j];
               }

           }

           for(int k=0;k<i;k++)
           {
               if(a[k]<min)
               {
                   min=a[k];
               }
           }

          if(i==0)
          {
              min=0;
          }
          if(i==9)
          {
              max=0;
          }
         b[i]=max+min;



    }
    cout<<"the modified array is  :  ";
    for(int i=0;i<10;i++)
    {
        cout<<b[i]<<" ";
    }



}

