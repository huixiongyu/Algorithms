#include<iostream>
using namespace std;

int main(){
	int n,team[1001]={0},p,t,score;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&p,&t,&score);
		team[p] +=score;
	}
	int max =0;
	for(int i=1;i<1001;i++){
		if(team[i] > max) {
			max = team[i];
		}
	}
	cout<<id<<" "<<team[max];
	return 0;
}
