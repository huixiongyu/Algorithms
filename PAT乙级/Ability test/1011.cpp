#include<iostream> 

using namespace std;

int main(){
	long  **p;
	int n,i,j;
	cin>>n;
	p=new long* [n];
	for(i=0;i<n;i++)
	{
		p[i]=new long[3];
		for(j=0;j<3;j++)
		{
			cin>>p[i][j];
		}
	 } 
	 for(i=0;i<n;i++){
	 	if(p[i][0]+p[i][1]>p[i][2])
	 		cout<<"Case #"<<i+1<<": true"<<endl;
	 	else
	 		cout<<"Case #"<<i+1<<": false"<<endl;
	 		
	 }
	 getchar();
	 return 0;
}
