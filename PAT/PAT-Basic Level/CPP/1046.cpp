#include<iostream>
using namespace std;

int main(){
	int N,sum_a=0,sum_b=0,call_a,put_a,call_b,put_b;
	bool A_win = true,B_win = true;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>call_a>>put_a>>call_b>>put_b;
		if(put_a == call_a+call_b) A_win = true;
		else A_win = false;
		if(put_b == call_a+call_b) B_win = true;
		else B_win = false;
		if(A_win == B_win) continue;
		if(A_win) sum_b++;
		else sum_a++;
	}
	cout<<sum_a<<" "<<sum_b;
	return 0;
}
