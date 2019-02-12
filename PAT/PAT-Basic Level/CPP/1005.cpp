#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int arr[10000];
	int n, num, flag=0;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>num;
		v[i] = num;
		while(num != 0){
			if(num % 2 != 0) num = 3*num+1;
			num /= 2;
			if(arr[num] == 1) break;
			arr[num] = 1;
		}
	}
	sort(v.begin(), v.end(), cmp);
 	for(int j=0;j<v.size();j++){
 		if(arr[v[j]] == 0){
 			if( flag ==1) cout<< " ";
 			cout<<v[j];
 			flag =1;
		 } 
		  
	 }
	return 0;
}
