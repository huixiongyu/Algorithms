#include<iostream>
#include<vector>
using namespace std;

int main(){
	string sell,need;
	bool flag = true;
	cin>>sell>>need;
	int m=sell.length(),n = need.length();
	if(m < n){
		cout<<"No";
		return 0; 
	} 
	vector<int> t(123),p(123);
	for(int i=0;i<m;i++)
		++t[int(sell[i])];
	for(int j=0;j<n;j++)
		++p[int(need[j])];
	int sum = 0;
	for(int i=48;i<123;i++)
	{
		if(t[i]<p[i]){
			sum += p[i] - t[i];
			flag = false;
		}
	}
	if(flag)
		cout<<"Yes "<<m-n;
	else
		cout<<"No "<<sum;
	return 0;
}
