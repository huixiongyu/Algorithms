#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
struct node
{
	int num;
	int de;
	int cai;	
};

int func(struct node a,struct node b)
{
	if((a.cai+a.de)!=(b.cai+b.de))
		return (a.cai+a.de)>(b.cai+b.de);
	else if(a.de!=b.de)
	{
		return a.de>b.de;
	}
	else
		return a.num<b.num;
}


int main()
{
	int N,low,high;
	scanf("%d %d %d",&N,&low,&high);
	int count=N;
	vector<node> a,b,c,d;
	node temp;
	for(int i=0;i<N;i++)
	{
		scanf("%d %d %d",&temp.num,&temp.de,&temp.cai);
		if(temp.de<low || temp.cai<low)
		{
			count--;
			continue;	
		}
		if(temp.de>=high && temp.cai>=high)
			a.push_back(temp);
		else if(temp.de>=high && temp.cai<high)
			b.push_back(temp);
		else if(temp.de<high && temp.cai<high && temp.de>=temp.cai)
			c.push_back(temp);
		else 
			d.push_back(temp);
	}
	sort(a.begin(),a.end(),func);
	sort(b.begin(),b.end(),func);
	sort(c.begin(),c.end(),func);
	sort(d.begin(),d.end(),func);
	cout<<count<<endl;
	for(int i=0;i<a.size();i++)
		printf("%d %d %d\n",a[i].num,a[i].de,a[i].cai);
	for(int i=0;i<b.size();i++)
		printf("%d %d %d\n",b[i].num,b[i].de,b[i].cai);
	for(int i=0;i<c.size();i++)
		printf("%d %d %d\n",c[i].num,c[i].de,c[i].cai);
	for(int i=0;i<d.size()-1;i++)
		printf("%d %d %d\n",d[i].num,d[i].de,d[i].cai);
	int ls=d.size()-1;
	printf("%d %d %d\n",d[ls].num,d[ls].de,d[ls].cai);
		
		
    getchar();
    return 0;
}

