#include<iostream>
using namespace std;

int main(){
	int t,num[10]={0};
	for(int i=0;i<10;i++)
		cin>>num[i];
	for(int i=1;i<10;i++){
		if(num[i] != 0){
			cout<<i;
			t=i;
			break;
		}
	}
	for(int i=0;i<num[0];i++) cout<<0;
	for(int i=0;i<num[t]-1;i++) cout<<t;
	for(int i=t+1;i<10;i++){
		for(int j=0;j<num[i];j++)
			cout<<i;
	}
	return 0;
}
