#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//运行超时，所以改写 
int main()
{
	int N,K;
	scanf("%d", &N);
	vector<int> v(N);
	for(int i=0;i<N;i++)
		cin>>v[i];
	cin>>K;
	vector<int> t(K),num(K);
	for(int i=0;i< K;i++)
	{
		cin>>t[i];
		num[i] = count(v.begin(), v.end(), t[i]);
		cout<<num[i];
		if(i!=K-1) cout<<" ";
	}
	return 0;
}
