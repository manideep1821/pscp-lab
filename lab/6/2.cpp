#include<iostream>
using namespace std;
int main()
{
	string a;
	cout<<"Enter a string : ";
	getline(cin,a);

	int i=0;
    int j=0,k=0,l=0;
	cout<<"The palindromes in the given sentence are: ";
	for(int i=0;i<100;i++)
	{

		if((a[i]!=' ')&&(a[i]!='\0'))
		{
			k++;
		}
		else
		{
			for(j=1;j<=k/2;j++)
			{
				if(a[i-j]!=a[i-1-k+j])
				{
					break;
				}


			}
			if(j>k/2)
			{
				l++;
				for(j=i-k;j!=i;j++)
				{
					cout<<a[j];
				}
				cout<<" ";
			}
			k=0;
		}

		if(a[i]=='\0')
		{
			break;
		}
	}
	cout<<endl<<"The number of paliondromes in the given sentence are  : "<<l<<endl;
	return 0;
}
