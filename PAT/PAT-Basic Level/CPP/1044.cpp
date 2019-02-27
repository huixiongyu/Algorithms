#include<iostream>
#include<string> 
using namespace std;

string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
string s;
void fn1(int m){  //数字转火星文 
	if(m/13)cout<<b[m/13];
	if((m/13) && (m%13)) cout<<" ";
	if(m%13 || m==0) cout<<a[m%13];
}
void fn2(){  //火星文转数字 
	int k1=0,k2=0;
	string s1 = s.substr(0,3), s2;
	int len = s.length();
	if(len> 4)
		s2 = s.substr(4,3);
	for(int i=1;i<13;i++){
		if(s1 == b[i]) k1 =i;
		if(s2 == a[i] || s1 == a[i]) k2 =i;
	}
	cout<<k1*13 + k2;
}

int main()
{
	int N;
	cin>>N;
	getchar();
	for(int i=0;i<N;i++){
		getline(cin,s);
		if(s[0]>'0' && s[0]<'9')
			fn1(stoi(s));
		else
			fn2();
		cout<<endl;
	}
	return 0;
}
