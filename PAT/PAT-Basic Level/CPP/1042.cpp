#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int ch[26]  ={0}, max=0,sign=0;
	for(int i=0; i<s.length();i++){
		s[i] = tolower(s[i]);
		if(islower(s[i])) ch[s[i] - 'a']++;
	}
	for(int i=0;i<26;i++){
		if(ch[i] > max){
			max = ch[i];
			sign = i;
		}
	}
	printf("%c %d",sign+'a', max);
	
	return 0;
}
