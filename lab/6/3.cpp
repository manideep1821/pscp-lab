#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[5][20];
    char temp[20];
    for(int i=0;i<5;i++)
    {
        cout<<"enter the string : "<<endl;
        cin.getline(s[i],20);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(strlen(s[j])>strlen(s[j+1]))
            {
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
            }
        }
    }
    cout<<"the sorted string array is : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<s[i]<<endl;
    }
    cout<<"the longest string in the array is : "<<s[4]<<" . its length is : "<<strlen(s[4])<<endl;
    cout<<"the smaleest string in the array is : "<<s[0]<<" . its length is : "<<strlen(s[0])<<endl;
    return 0;
}
