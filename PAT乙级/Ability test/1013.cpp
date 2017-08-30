#include<iostream> 

using namespace std;

bool isprime(int n){
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
	 
}


int main(){
	int M,N,t=1;
	cin>>M>>N;
	int p[1000];
	for(int m=0;m<N;m++) p[m]=0;
	p[0]=2;
	for(int i=3;t<N;i++)
	{
		if(isprime(i))
		{
				p[t]=i;
				t++;
		}
		
	}
	for(int j=M-1,k=1;j<N;j++)
	{
		if(j==N-1)
		{
			cout<<p[N-1];
			break;
		}
		if(k%10!=0)
			cout<<p[j]<<" ";
		else 
			cout<<p[j]<<endl;
		k++;
		
	}
	getchar();
	return 0;
}
