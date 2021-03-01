#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int r;
    int count =0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    int count6=0;
    int count7=0;
    int count8=0;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r==1)
        {
            count =count +1;
        }
        else if(r==2)
        {
            count1 =count1+1;
        }
        else if(r==3)
        {
            count2=count2+1;
        }
          else if(r==4)
        {
            count3 =count3+1;
        }
        else if(r==5)
        {
            count4=count4+1;
        }
          else if(r==6)
        {
            count5 =count5+1;
        }
        else if(r==7)
        {
            count6=count6+1;
        }
          else if(r==8)
        {
            count7 =count7+1;
        }
        else if(r==9)
        {
            count8=count8+1;
        }

    }
    cout<<"the occurence of "<<endl;
    cout<<" 1 :"<<count<<endl;
    cout<<" 2 :"<<count1<<endl;
    cout<<" 3 :"<<count2<<endl;
    cout<<" 4 :"<<count3<<endl;
    cout<<" 5 :"<<count4<<endl;
    cout<<" 6 :"<<count5<<endl;
    cout<<" 7 :"<<count6<<endl;
    cout<<" 8 :"<<count7<<endl;
    cout<<" 9 :"<<count8<<endl;

    return 0;
}
