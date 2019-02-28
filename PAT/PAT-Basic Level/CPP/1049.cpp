#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	double sum = 0.0, t;
	for(int i=1;i <=n; i++){
		cin>>t;
		sum = sum + t*i*(n - i + 1);
	}
	printf("%.2f", sum);
	return 0;
}
