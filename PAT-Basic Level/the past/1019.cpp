#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool func(char a,char b)
{
	return a>b;
}

int main()
{
    string s;
    string a,b;
    cin>>s;
   	s.insert(0,4-s.length(),'0');
   	do{
   		string a=s;
		string b=s;
		sort(a.begin(),a.end(),	func);
		sort(b.begin(),b.end());
		int res=stoi(a)-stoi(b);
		s=to_string(res);
		s.insert(0,4-s.length(),'0');
		cout<<a<<"-"<<b<<"="<<s<<endl;
	}while(s!="6174"&& s!="0000");
    getchar();
    return 0;
}

