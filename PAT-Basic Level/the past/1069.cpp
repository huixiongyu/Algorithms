#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main()
{
	int m,n,s;
	cin>>m>>n>>s;
	string str;
	vector<string> vec(m+1);
	map<string,int> maps;
	int flag=0,sign=0;
	for(int i=1;i<=m;i++)
	{
		cin>>vec[i];
		maps[vec[i]]=0;
	}
	for(int i=1;i<=m && s<m;i++)
	{
		if(maps[vec[i]]==1)
		{
			s=s+1;	
		}	
		if(i==s && maps[vec[i]]==0)
		{
			//��Ϊ��ʽҪ�������һ�����û�лس�������ڵ�һ�� ����������ʱ�򣬲�����س���1~n-1��ʱ������س� 
			if(sign!=0)				 
			{
				cout<<endl;
				sign=1;
			}
			maps[vec[i]]=1;
			cout<<vec[i];
			s=s+n;
			flag=1;
		}
	}
	if(flag==0)
		cout<<"Keep going...";

    getchar();
    return 0;
}

