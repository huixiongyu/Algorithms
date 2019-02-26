#include<iostream>
#include<vector>
using namespace std;

int main(){
	int N,K,t;
	scanf("%d", &N);
	vector<int> score_counter(101);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&t);
		score_counter[t]++;	
	}
	scanf("%d",&K);
	for(int i=0;i<K;i++)
	{
		scanf("%d",&t);
		if(i!= 0)printf(" ");
		printf("%d", score_counter[t]);
	} 
	return 0;
} 
