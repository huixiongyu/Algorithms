#include<iostream>

using namespace std;

int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	int sum=a+b;
	int res[100];
	if(sum==0)
	{
		cout<<0;
		return 0;
	}
	int t=0;
	while(sum!=0)
	{
		res[t++]=sum%n;
		sum=sum/n;
	}
	for(int i=t-1;i>=0;i--)
		cout<<res[i];
	return 0;
}
