#include<iostream>
using namespace std;
class abcd
{
    public :
        int product;
        float cost;
        abcd()
        {
            product=5;
            cost=20.5;
        }
        abcd(int a)
        {
            product=a;
            cost=25.5;
        }
        abcd(abcd &x)
        {
            product=x.product;
            cost=x.cost;
        }
        ~abcd()
        {
            cout<<"Bye"<<endl;
        }

};
int main()
{
    abcd a1,a2(45),a3(a2);
    cout<<a1.product<<" "<<a1.cost<<endl;
    cout<<a2.product<<" "<<a2.cost<<endl;
    cout<<a3.product<<" "<<a3.cost<<endl;
    return 0;

}
