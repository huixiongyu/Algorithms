#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int a,b,d,sum =0;
	cin>>a>>b>>d;
	sum = a+b;
	if(sum==0){
	  cout<<0;
	  return 0;
	}
	vector<int> v;
	while(sum !=0){
		v.push_back(sum%d);
		sum /= d;
	}
	reverse(begin(v),begin(v)+v.size());
	for(int i=0;i<v.size();i++) cout<<v[i];
	return 0;
}
