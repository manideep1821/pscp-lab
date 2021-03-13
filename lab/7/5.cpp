#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("file1.txt");
    string s;
    getline(fin,s);
    fin.close();
    fout.open("file2.txt");
    string reverse(string );
    fout<< reverse(s);
    fout.close();
    return 0;
}
string reverse(string s)
{
    int a=s.length()-1;
    int start ,end=a+1;
    string result="";
    while(a>=0)
    {
        if(int(s[a])==32)
        {
            start=a+1;
            while(start!=end)
            {
                result=result+s[start++];
            }
            result=result+' ';
            end=a;
        }
        a--;
    }
    start=0;
    while(start!=end)
    {
        result=result+s[start++];
    }
    return result;
}
