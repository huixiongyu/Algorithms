#include<iostream>
#include<cmath>
using namespace std;
int m, x, y;
void print(double t){
	if(t > m) cout<<" Cong";
	if(t == m) cout<<" Ping";
	if(t < m) cout<<" Gai";
}

int main(){
	scanf("%d %d %d",&m, &x, &y);
	for(int i=99;i >=10;i--){
		int j = i % 10 * 10 + i/10;
		double k = abs(j - i) * 1.0 /x;
		if(j == k*y){
			cout<<i;
			print(i);print(j);print(k);
			return 0;
		}
	}
	cout<<"No Solution";
	return 0;
}
