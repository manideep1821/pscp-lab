#include<iostream>
using namespace std;
int main()
{
  string s,k;
  getline(cin,s);
  int a=s.length(),flag=0,count=0;
  for(int i=0;i<a;i++)
  {
      if(int(s[i])!=32)
      {
         flag++;
         if(int(s[i+1])==32)
         {
             int a=0;
             for(int j=0;j<flag/2;j++)
             {

             }

         }
      }
      else
      {
          flag=0;
      }
  }
  return 0;

}
