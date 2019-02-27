#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string s1,s2,result;
	string encode = "0123456789JQK";
	cin>>s1>>s2;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int len1 = s1.length(), len2 = s2.length();
	if(len1 > len2)
		s2.append(len1 - len2, '0');
	else
		s1.append(len2 - len1, '0');	
	for(int i=0;i< s1.length() ;i++){
		if(i%2 == 0){
			result +=encode[((s1[i] - '0') + (s2[i] - '0') ) % 13];
		}else{
			int t = s2[i] - s1[i];
			if(t<0) t = t + 10;
			result +=encode[t];
		}
	}
	for(int i = result.length()-1;i >= 0;i--)
		cout<<result[i];
	return 0;
} 
