#include<iostream>
using namespace std;

int main(){
	int n;
	char ch;
	cin>>n>>ch;
	int m = n/2 + n%2;
	for(int i=0;i<n;i++)
		cout<<ch;
	cout<<endl;
	for(int i=0;i< m-2;i++){
		cout<<ch;
		for(int j=0;j< n-2;j++)
			cout<<" ";
		cout<<ch<<endl;
	} 
	for(int i=0;i<n;i++)
		cout<<ch;	
		
	return 0;
}
