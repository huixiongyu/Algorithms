#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int N, M;
	cin>>N>>M;
	vector<int> v(N);
	for(int i=0;i<N;i++)
		cin>>v[i]; 
	M %= N;
	if(M != 0){
		reverse(begin(v), begin(v)+N);
		reverse(begin(v), begin(v)+M);
		reverse(begin(v)+M, begin(v)+N);
	}
	for(int i=0;i<N-1;i++)
		cout<<v[i]<<" ";
	cout<<v[N-1];
	return 0;
}
