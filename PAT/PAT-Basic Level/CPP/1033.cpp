#include<iostream>
using namespace std;

int main(){
	string key,s;
	int caps[4] = {0}, ch[123] ={0};
	bool caps_work =true, space_work = true;
	cin>>key>>s;
	for(int i=0;i< key.length(); i++){
		ch[int(key[i])] =1;
		switch(key[i]){
			case ',':
				caps[0] =1;
				break;
			case '.':
				caps[1] = 1;
				break;
			case '-':
				caps[2] = 1;
				break;
			case '+':
				caps[3] = 1;
				break;
		}
		if(key[i]>='a' &&key[i]<='z' ){
			ch[int(key[i]) - 32] =1;
			
		}else if(key[i]>='A' && key[i]<='Z'){
			ch[int(key[i]) + 32] =1;
		}else if(key[i] == '_'){
			space_work = false;
		}
	}
	if(caps[0] ==1 && caps[1] ==1 && caps[2] ==1 && caps[3] == 1)
		caps_work = false;
	for(int i=0;i<s.length();i++){
		if(s[i] == '_' && space_work )
			cout<<s[i];
		else if(s[i] >='A' && s[i] <='Z' && caps_work && ch[int(s[i])] != 1) 
			cout<< s[i];
		else if(ch[int(s[i])] != 1 && s[i] != '_')
			cout<<s[i];
	}
	return 0;
} 
