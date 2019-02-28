#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n,m, max =0,id=0,t;
	cin>>n>>m;
	vector<int> v(n);
	for(int i=0; i < m;i++)
	{
		for(int j=0; j < n;j++)
		{
			cin>>t;
			v[j] += t;
		}
	}
	for(int i = 0; i< n;i++)
	{
		if(v[i] > max ) max = v[i];
	}
	cout<<max<<endl;
	bool flag = false;
	for( int i=0; i < n; i++)
	{
		if(v[i] == max){
			if(flag) cout<<" ";
			cout<< i + 1;
			flag = true;
		}
	}
	return 0;
}
