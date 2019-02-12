#include<iostream>
#include<string> 
using namespace std;

int main(){
	string n;
	int sum = 0;
	string str[10]= {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	cin >> n;
	for(int i=0;i<n.length();i++){ 
		sum += (n[i] - '0');
	}
	string total = to_string(sum);
	int len = total.length();
	for(int j=0;j < len;j++){
		cout<<str[total[j] - '0'];
		if(j!=len-1) cout<< ' ';
	}
	return 0;
	
}
