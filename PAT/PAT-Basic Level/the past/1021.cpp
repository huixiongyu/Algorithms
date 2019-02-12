#include<iostream>
#include<string> 
using namespace std;

int main()
{
    string N;
    cin>>N;
    int len=N.length();
    int a[10]={0};
    int b[10]={0};
    int num=0,t=0;
    for(int i=0;i<len;i++)
    {
    	num=N[i]-'0';
    	a[num]++;
	}
	for(int j=0;j<10;j++)
	{
		if(a[j]!=0)
			b[t++]=j;

	}
	for(int k=0;k<t-1;k++)
		cout<<b[k]<<":"<<a[b[k]]<<endl;
	cout<<b[t-1]<<":"<<a[b[t-1]];
    getchar();
    return 0;
}
 
