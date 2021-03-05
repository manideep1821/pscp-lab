#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string : ";
    getline(cin,s);
    int a=s.length(),flag=0;
    for(int i=0;i<a;i++)
    {
        if(s[i]!=32)
        {
            flag++;
        }
        else
        {
            flag=0;
        }

        if(flag==4&&(int(s[i+1])==32||s[i+1]=='\0'))
        {
            s[i-3]='N';
            s[i-2]='I';
            s[i-1]='T';
            s[i]='W';
        }

    }
    cout<<s;
    return 0;
}

