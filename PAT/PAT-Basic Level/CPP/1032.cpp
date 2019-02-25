#include<iostream>
using namespace std;
//sum的数组长度最大是n，如果用vector会方便记录，节省空间 

int main(){
	int n, score[100000][2] = {0},sum[100000] = {0}, max = 0, max_id =0, id_counter =0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>score[i][0]>>score[i][1];
		sum[score[i][0]] +=score[i][1];
		if(score[i][0] > id_counter)
			id_counter = score[i][0];
	}
	for(int i=1;i <=id_counter; i++)
		if(sum[i] > max){
			max = sum[i];
			max_id = i;
		}
	cout<<max_id<<" "<<max;
	return 0;
}
