#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,m,t[10000] = {0};
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>m;
		t[abs(m - i)]++;
	}
	for(int i=9999; i>=0;i--)
		if(t[i] >=2) cout<<i<<" "<<t[i]<<endl;
	return 0;
}
