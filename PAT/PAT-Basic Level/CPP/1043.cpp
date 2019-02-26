#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int t[6] = {0};
	for(int i=0;i<s.length();i++){
		switch(s[i]){
			case 'P':
				t[0]++;
				break;
			case 'A':
				t[1]++;
				break;
			case 'T':
				t[2]++;
				break;
			case 'e':
				t[3]++;
				break;
			case 's':
				t[4]++;
				break;
			case 't':
				t[5]++;
				break;
		}
	}
	while( t[0]>0 || t[1]>0 || t[2] > 0 || t[3]>0  || t[4]>0 || t[5]>0){
		for(int i=0;i < 6;i++ ){
			if(t[i] > 0){
				switch(i){
					case 0:
						cout<<'P';
						break;
					case 1:
						cout<<'A';
						break;
					case 2:
						cout<<'T';
						break;
					case 3:
						cout<<'e';
						break;
					case 4:
						cout<<'s';
						break;
					case 5:
						cout<<'t';
						break;
				}
				--t[i];
			}
		}
	}

	return 0;
} 
