#include<iostream>
using namespace std;
int main()
{
    int number,sum,firstdigit,lastdigit;
    cout<<"enter the four digit number"<<endl;
    cin>>number;
    lastdigit = number%10;
    firstdigit=number/1000;
    sum = firstdigit+lastdigit;
    cout<<"sum of first and last digit is :"<<sum;
    return 0;

}
