#include<iostream>

using namespace std;

int main(){
	float a[81];
	a[1]=a[2]=1;
	for(int i=3;i<=80;i++)
		a[i]=a[i-1]+a[i-2];
	int from,to;
	cin>>from>>to;
	while(from&&to)
	{	
		float sum=0;
		for(int j=from;j<=to;j++)
			sum+=a[j];
		cout<<sum<<endl;
		cin>>from>>to;
			
	}
	
	return 0;
}
