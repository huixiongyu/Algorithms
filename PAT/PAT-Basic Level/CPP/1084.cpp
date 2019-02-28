#include<iostream>
using namespace std;

int main(){
	string s;
	int n,k;
	cin>>s>>n;
	for(int i=1;i<n;i++)
	{
		string t;
		for(int  j = 0;j <s.length(); j = k){
			for(k = j; k<s.length() && s[k] == s[j]; k++);
			t +=s[j] + to_string(k-j);
		}
		s = t;
	}
	cout<<s;
	return 0;
}
