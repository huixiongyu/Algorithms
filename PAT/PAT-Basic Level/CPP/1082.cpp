#include<iostream>

using namespace std;

int main(){
	int n,x,y, sum[10001];
	string id[10001],s;
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>s>>x>>y;
		id[i] = s;
		sum[i] = x*x + y*y;
	}
	int max=0,min=20000,max_id =0,min_id =0;
	for(int i=0;i<n;i++){
		if(sum[i] > max){
			max_id =i;
			max = sum[i];
		}
		if(sum[i] <min){
			min_id = i;
			min = sum[i];
		}
	}
	cout<<id[min_id]<<" "<<id[max_id];
}
