#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int num;
	cin>>num;
	vector<int> a(num);
	for(int i=0;i<num;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	int res=a[0];
	for(int i=1;i<num;i++)
		res=(res+a[i])/2;
	cout<<res;
    getchar();
    return 0;
}

