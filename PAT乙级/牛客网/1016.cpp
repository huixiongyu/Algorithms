#include<iostream>
using namespace std;

void Countone(int n,int r)
{
	const char temp[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char p[10000];
	int i,t=0;
	int m;
	for(i=0;n/r>0;i++){
		m=n%r;
		p[i]=temp[m];
		n=n/r;
	}
	p[i]=temp[n];
	int count=0;
	for(int j=0;j<=i;j++){
		if(p[i]=='1')
			count++;
	}
	cout<<count<<endl;
}

int main()
{
	int n,R;
	while(~scanf("%d %d",&n,&R))
	{
			Countone(n,R);	
	}
	getchar();
	return 0;
}
