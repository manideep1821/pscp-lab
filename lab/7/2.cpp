#include<iostream>
using namespace std;
class person
{
     private :
         int birth;
         int death;
         string name;
     public :
        person()
        {
            cout<<"default constructor is called "<<endl;
        }
        void setdetails(string s,int a,int b)
        {
            name=s;
            birth=a;
            death=b;
            cout<<"NAME is : "<<name<<endl<<"Y.O.B is : "<<a<<endl<<"Y.O.D : "<<b<<endl;
        }
       ~person()
       {
           cout<<"default destructor is called  "<<endl;
       }

};
int main()
{
    person p1;
    p1.setdetails("manideep",2002,2050);
    return 0;
}
