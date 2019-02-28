#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1, s2, check;
	getline(cin, s1);
	getline(cin, s2);
	for(int i=0; i < s1.length(); i++){
		if(check.find(s1[i]) == string::npos)
			check += s1[i];
	}
	for(int i=0; i< s2.length() ; i++)
		if(check.find(s2[i]) == string::npos)
			check += s2[i];
	for(int i=0; i< check.length(); i++)
		cout<<check[i];
	return 0;
} 
