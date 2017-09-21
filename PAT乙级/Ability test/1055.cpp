#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct
{
	string name;
	int height;
} node;
int cmp(node a,node b)
{
	return a.height!=b.height?a.height>b.height:a.name<b.name;
}

int main()
{
	int n,k;
	cin>>n>>k;
	vector<node> stu(n);
	for(int i=0;i<n;i++)
		cin>>stu[i].name>>stu[i].height;
	sort(stu.begin(),stu.end(),cmp);
	int m,t=0,row=k;
	while(row)
	{
		if(row==k)
			m=n-n/k*(k-1);
		else
			m=n/k;
		vector<string> temp(m);
		temp[m/2]=stu[t].name;
		int j=m/2-1;
		for(int i=t+1;i<t+m;i=i+2)
			temp[j--]=stu[i].name;
		j=m/2+1;
		for(int i=t+2;i<t+m;i=i+2 )
			temp[j++]=stu[i].name;
		cout<<temp[0];
		for(int i=1;i<m;i++)
			cout<<" "<<temp[i];
		cout<<endl;
		t=t+m;
		row--;
	}
	
    getchar();
    return 0;
}

