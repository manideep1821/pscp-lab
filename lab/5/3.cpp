#include<iostream>
using namespace std;
int main()
{
	int n,rf,i,j;
	cout<<"Enter size of the array:";
	cin>>n;
	int a[n][n];
	cout<<"Rotation factor:";
	cin>>rf;
	int temp1;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cout<<"Enter element of row "<<i+1<<" and column "<<j+1<<":";
			cin>>a[i][j];
		}
	int x,y,temp11,temp2;
	for(;rf;rf--)
	{
		for(i=0;i<n/2;i++)
		{
			if(i%2==0)
			{
				x=y=i;
				temp1=a[x][y];
				do
				{
					y++;
					if(y==n-i)
					{
						y--;
						x++;
					}
					temp2=a[x][y];
					a[x][y]=temp1;
					temp1=temp2;
				}while(x!=y);
				do
				{
					y--;
					if(y<i)
					{
						y++;
						x--;
					}
					temp2=a[x][y];
					a[x][y]=temp1;
					temp1=temp2;
				}while(x!=y);
			}
			else
			{
				x=y=i;
				temp1=a[x][y];
				do
				{
					x++;
					if(x==n-i)
					{
						x--;
						y++;
					}
					temp2=a[x][y];
					a[x][y]=temp1;
					temp1=temp2;
				}while(x!=y);
				do
				{
					x--;
					if(x<i)
					{
						x++;
						y--;
					}
					temp2=a[x][y];
					a[x][y]=temp1;
					temp1=temp2;
				}while(x!=y);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

