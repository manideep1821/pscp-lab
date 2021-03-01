#include<iostream>
using namespace std;
int main()
{
    char x;

    cout<<"enter the input character :";
    while( cin>>x)
    {
        if(x=='A'||x=='B'||x=='C')
        {
            cout<<"2"<<endl;
        }
      else  if(x=='D'||x=='E'||x=='F')
        {
            cout<<"3"<<endl;
        }
        else  if(x=='G'||x=='H'||x=='I')
        {
            cout<<"4"<<endl;
        }
         else  if(x=='J'||x=='K'||x=='L')
        {
            cout<<"5"<<endl;
        }
         else  if(x=='M'||x=='N'||x=='O')
        {
            cout<<"6"<<endl;
        }
         else  if(x=='P'||x=='Q'||x=='R'||x=='S')
        {
            cout<<"7"<<endl;
        }
         else  if(x=='T'||x=='U'||x=='V')
        {
            cout<<"8"<<endl;
        }
         else  if(x=='W'||x=='X'||x=='Y'||x=='Z')
        {
            cout<<"9"<<endl;
        }
        if(x=='$')
        {
            break;
        }
        cout<<"enter the input character :";
    }
}
