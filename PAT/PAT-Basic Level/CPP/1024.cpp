#include<iostream>
#include<string>
using namespace std;

int main(){
	string s,num;
	int ex,t=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
		if(s[i] == 'E') t=i;
	num = s.substr(1,t-1);
	ex = stoi(s.substr(t+1));
//	cout<<num<<" "<<s.substr(t+1);
	if(s[0] == '-') cout<< "-";
	if(ex < 0){
		cout<<"0.";
		for(int i=0;i<abs(ex)-1;i++) cout<<'0';
		for(int i=0;i<num.length();i++) 
			if(num[i] != '.') cout<<num[i]; 
	}else{
		cout<<num[0];
		int j,tmp;
		for(int j=2,tmp=0;j<num.length()&&tmp<ex;j++,tmp++) cout<<num[j];
		if(j == num.length()){
			for(int i=0;i<ex-tmp;i++) cout<<'0';
		}else{
			cout<<'.';
			for(int i=j;i<num.length();i++) cout<<num[i];
		}
	}
	return 0;
}
