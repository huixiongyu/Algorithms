#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
	vector<string> v;
	string s;
	while(cin>>s)
		v.push_back(s);
	reverse(begin(v),begin(v)+v.size());
	if(v.size()>1){
		for(int i=0;i<v.size()-1;i++)
			cout<<v[i]<<" ";
	}
	cout<<v[v.size()-1];
	return 0;
}
