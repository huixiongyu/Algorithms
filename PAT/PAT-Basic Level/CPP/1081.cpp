#include<iostream>
using namespace std;

int main(){
	int n;
	string print[5]={
		"Your password is wan mei.\n",
		"Your password is tai duan le.\n",
		"Your password is tai luan le.\n",
		"Your password needs shu zi.\n",
		"Your password needs zi mu.\n"
	};
	string s;
	cin>>n;getchar();
	for(int i=0;i < n; i++){
		bool zimu = false, num = false, other = false;
		getline(cin, s);
		if(s.length() < 6){
			cout<<print[1];
			continue;
		}
		for(int j=0; j<s.length();j++){
			if((s[j] >= 'a' && s[j]<'z') || (s[j]>='A' && s[j]<='Z')) zimu = true;
			else if(s[j] >= '0' && s[j] <= '9') num = true;
			else if(s[j] != '.'){
				other = true;
				cout<<print[2];
				break;
			} 
		}
		if(!zimu && num && !other){
			cout<<print[4];
			continue;
		}
		else if(!num && zimu && !other){
			cout<<print[3];
			continue;
		}
		else if(zimu && num && !other){
			cout<<print[0];
		}
	} 
	return 0;
}
