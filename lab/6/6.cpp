#include<iostream>
using namespace std;
struct student
{
    int a,b;
    float f;
    char s[20];
};
int main()
{

    struct student s[3],temp;
    for(int i=0;i<3;i++)
    {
        cout<<"enter the student details : "<<endl;
        cin>>s[i].a>>s[i].b>>s[i].f;
        cin.ignore();
        cin.getline(s[i].s,20);
    }
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3-i;j++)
        {
            if(s[j].f<s[j+1].f)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<s[i].a<< " "<<s[i].b<<" "<<s[i].f<<" "<<s[i].s<<endl;
    }

    return 0;
}
