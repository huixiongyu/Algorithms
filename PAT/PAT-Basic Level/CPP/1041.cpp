#include<iostream>
using namespace std;

int  main(){
	string info[1000][2], code, sit;
	int N,M,t;
	cin>>N;
	for(int i=0;i< N;i++)
	{
		cin>>code>>t>>sit;
		info[t][0] = code;
		info[t][1] = sit;
	}
	cin>>M;
	for(int j=0;j < M;j++){
		cin>>t;
		cout<<info[t][0]<<" "<<info[t][1]<<endl;
	}	
	return 0;
}
