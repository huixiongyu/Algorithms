#include<iostream>
using namespace std;

int main()
{
	int n;
	char ch;
	cin>>n>>ch;
	int row=(n+1)/2;
	for(int i=0;i<row;i++)    
	{
		if(i==0||i==row-1)
		{
			for(int j=0;j<n;j++)
				cout<<ch;
		}
		else
		{
		
			for(int j=0;j<n;j++)
			{
				if(j==0||j==n-1)
					cout<<ch;
				else 
					cout<<" ";
			}
		}
		cout<<endl;
	}
    getchar();
    return 0;
}

