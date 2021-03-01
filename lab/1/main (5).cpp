#include<iostream>
using namespace std;
int main()
{
  double kms,mts,fts,inchs,cms;
  cout<<"the distance between two cities\n";
  cin>>kms;
  mts=kms*1000;
  fts=kms*3280.84;
  inchs=kms*39370.1;
  cms=kms*10000;
  cout<<"meters :"<<mts;
  cout<<"\n";
  cout<<"feets :"<<fts;
  cout<<"\n";
  cout<<"inches :"<<inchs;
  cout<<"\n";
  cout<<"centimeters :"<<cms;
   
    
    return 0;
}