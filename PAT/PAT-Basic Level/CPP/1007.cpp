#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool isprime(int num){
	for(int t=2;t<=(int)sqrt(num);t++){
		if(num%t==0)
			return false;
	}
	return true;
}

int main(){
	int n, count=0;
	cin>>n;
	vector<int> v;
	for(int i=2;i<=n;i++){
		if(isprime(i))
			v.push_back(i);
	}
	for(int i=v.size()-1;i>0;i--){
		if(v[i] - v[i-1] == 2)
			count++;
	}
	cout<<count;
	return 0;
}
