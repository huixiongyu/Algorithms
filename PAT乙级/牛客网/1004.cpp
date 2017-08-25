#include<iostream> 

using namespace std;



int main(){
	int m,n,sum=0;
	cin>>m>>n;
	int arr[81];
	arr[1]=arr[2]=1;
	for(int i=2;i<=80;i++)
		arr[i]=arr[i-1]+arr[i-2];
	while(n>=1&&n<=80&&m>=1&&m<=80)
		{
			for(int j=m;j<=n;j++)
				sum+=arr[j];
			cout<<sum<<" ";
			cin>>n>>m;
		}
	
	return 0;
}
