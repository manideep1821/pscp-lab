#include<iostream>
using namespace std;
class time
{
    private :
        int hr;
        int min;
        int sec;
    public:
        time()
        {
          cout<<"default constructor is called "<<endl;
        }
       void set_time(int a,int b,int c)
        {
            hr=a;
            min=b;
            sec=c;
            cout<<"the time is : "<<hr<<" hours "<<min<<" minuites "<<sec<<" seconds "<<endl;
        }
       void reset_time(int a,int b,int c)
        {
            hr=a;
            min=b;
            sec=c;
            cout<<"the current  time is : "<<hr<<" hours "<<min<<" minuites "<<sec<<" seconds "<<endl;
        }

};
int main()
{
    time t1;
    t1.set_time(12,30,30);
    t1.reset_time(1,30,45);
    return 0;
}
