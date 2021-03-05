#include<iostream>
#include<string>
using namespace std;
struct student
{
    int a,b;
    char s[20];
};
int main()
{
    struct student a1,a2,a3;
    cout<<"enter the first student detalis : "<<endl;
    cin>>a1.a>>a1.b;
    cin.ignore();
    cin.getline(a1.s,20);
    cout<<"enter the second student detalis : "<<endl;
    cin>>a2.a>>a2.b;
    cin.ignore();
    cin.getline(a2.s,20);
    cout<<"enter the third student detalis : "<<endl;
    cin>>a3.a>>a3.b;
    cin.ignore();
    cin.getline(a3.s,20);
    if(a1.b>a2.b&&a1.b>a3.b)
    {
        cout<<"the name of the student who got highest marks is : "<<a1.s<<endl;
    }
    else if(a2.b>a1.b&&a2.b>a3.b)
    {
        cout<<"the name of the student who got highest marks is : "<<a2.s<<endl;
    }
    else
    {
        cout<<"the name of the student who got highest marks is : "<<a3.s<<endl;
    }

    return 0;
}
