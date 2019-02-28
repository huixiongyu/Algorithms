#include<iostream>
#include<string>
using namespace std;

void fun(int n){
	bool flag = false;
	int result;
	for(int i=1; i<10;i++){
		result = i * n * n;
		string s = to_string(result), nums =to_string(n);
		int len = nums.length();
		s = s.substr(s.length() -len, len);
		if(s == nums){
			cout<<i<<" "<<result;
			flag = true;
			return ;
		}
		
	}
	if(!flag) cout<<"No";
}

int main(){
	int m, t;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>t;
		if(i!=0) cout<<endl;
		fun(t);
	}
	return 0;
}
