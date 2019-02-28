#include<iostream>
#include<string>
using namespace std;

bool isPrime(int n){
	if(n == 0 || n == 1) return false;
	for(int i = 2; i * i <= n ;i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int L, K;
	string s;
	cin>>L>>K>>s;
	for(int i=0; i <= L-K; i++ ){
		string t = s.substr(i, K);
		if(isPrime(stoi(t))){
			cout<<t;
			return 0;
		}
	}
	cout<<404;
	return 0;
}
