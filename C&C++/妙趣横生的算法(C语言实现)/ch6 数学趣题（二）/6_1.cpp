#include<iostream>
using namespace std;
void cntnsIntsum(int n)
{
	int i,sum=0,j;
	for(i=1;i<n;i++)
	{
		j=i-1;
		while(sum<n)
		{
			j++;
			sum=sum+j;
		}
		if(sum==n)
			cout<<i<<"+...+"<<j<<"="<<sum<<endl;	
		sum=0;
	}
	
}

int main()
{
	int num;
	cout<<"Please input an integer"<<endl;
	cin>>num;
	cntnsIntsum(num);
    getchar();
    return 0;
}

