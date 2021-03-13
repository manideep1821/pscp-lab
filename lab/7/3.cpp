#include<iostream>
using namespace std;
class creditcard
{
    private :
        int balance;

    public:
        int money;
        creditcard()
        {
            balance=55000;
        }
        void usecard(int a)
        {
            money =a;
            if(balance>=money)
            {
                balance =balance-money;
                cout<<"sucessfull ... the balance is : "<<balance<<endl;
            }
            else
            {
                cout<<"un sucessfull ...money is un suffiecient "<<endl;
            }
        }

};
int main()
{
    creditcard c1;
    c1.usecard(5000);
    c1.usecard(5000);
    creditcard c2;
    c2.usecard(50000);
    return 0;

}

