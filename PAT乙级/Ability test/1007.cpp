#include<iostream>
#include<cmath>

using namespace std;

int prime(int n) {
	int i=(int)sqrt(n);
	for(int j=2;j<=i;j++) 
		if(n%j==0)
		 	return 0;
	return 1;
}

int main(){
	int num,i;
	int sum=0;
	cin>>num;
	for(i=5;i<=num;i++)
		if(prime(i-2)&&prime(i))
			sum+=1;
	cout<<sum;
	return 0;
}
