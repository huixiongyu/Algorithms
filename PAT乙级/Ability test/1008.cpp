#include<iostream>
using namespace std;


int main(){
	int N,M;
	cin>>N>>M;
	int *a=new int[N];
	if(M>N)
		M=M%N;
	int *temp1=new int[M];
	int *temp2=new int[N-M];
	for(int i=0;i<N-M;i++) 
		cin>>temp1[i];
	for(int j=0;j<M;j++)
		cin>>temp2[j];
	for(int k=0;k<N;k++)
	{
		if(k<M)
			a[k]=temp2[k];
		else
			a[k]=temp1[k-M];
	}
	for(int t=0;t<N;t++)
	{
		cout<<a[t];
		if(t!=N-1)
			cout<<" ";
	}
	delete [] a;
	delete [] temp1;
	delete [] temp2;
	return 0;
}
