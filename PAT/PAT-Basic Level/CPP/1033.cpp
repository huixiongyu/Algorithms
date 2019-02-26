#include<iostream>
using namespace std;

int main(){
	string key,s;
	int ch[123] ={0};
	bool caps_work =true, space_work = true;
	cin>>key>>s;
	for(int i=0;i< key.length(); i++){
		ch[int(key[i])] =1;
		if(key[i]=='+')
			caps_work = false; 
		if(key[i]>='a' &&key[i]<='z' ){
			ch[int(key[i]) - 32] =1;
		}else if(key[i]>='A' && key[i]<='Z'){
			ch[int(key[i]) + 32] =1;
		}else if(key[i] == '_'){
			space_work = false;
		}
	}
	for(int i=0;i<s.length();i++){
		if(s[i] == '_' && !space_work ) continue;
		if(s[i] >='A' && s[i] <='Z' && !caps_work) continue;
		if(ch[int(s[i])] != 1)
			cout<<s[i];
	}
	return 0;
} 
