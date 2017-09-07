#include<iostream>
#include<string>
#include<cmath>
using namespace std;
long getnum(string s,int n)
{
	int len=s.length();
	int num=0,sum=0;
	long res=0;
	for(int i=0;i<len;i++)
	{
		num=s[i]-'0';
		if(num==n)
			sum++;
	}
	if(sum!=0)
	{
		for(int j=0;j<sum;j++)
			res+=n*pow(10,j);
	}	
	else
		return 0;
	return res;
}

int main()
{
    string a,b;
    int da,db;
    long dist;
    cin>>a>>da>>b>>db;
    long pa,pb;
    pa=getnum(a,da);
    pb=getnum(b,db);
    dist=pa+pb;
    cout<<dist;
    getchar();
    return 0;
}

