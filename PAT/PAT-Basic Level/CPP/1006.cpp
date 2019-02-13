#include<iostream>
using namespace std;

int main(){
	int n, tmp[3] = {0}, i=0;
	cin>>n;	
	while(n!=0){
		tmp[i++] = n % 10;
		n = n / 10;
	}
	for(int j=0;j<tmp[2];j++)
		cout<<"B";
	for(int j=0;j<tmp[1];j++)
		cout<<"S";
	for(int j=0;j<tmp[0];j++)
		cout<<j+1;
	return 0;
} 
