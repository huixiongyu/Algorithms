#include<iostream>
using namespace std;

int main(){
	int sum = 0, temp[10001] = {0},n;
	scanf("%d", &n);
	for(int i =1; i <=n; i++){
		sum = i/2 + i/3 + i/5;
		temp[sum]++; 
	}
	sum =0;
	for(int i=0;i <10001; i++)
		if(temp[i] >0) sum++;
	cout<<sum;
	return 0;
}
