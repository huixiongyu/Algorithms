#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	char s[80];
	int t=0;
	for(int i=0;i<a.length();i++)
	{	
		int flag=0;
		for(int j=0;j<b.length();j++)	
		{
			if(b[j]==a[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			s[t++]=toupper(a[i]);
	}    
	for(int i=0;i<t;i++)
	{
		for(int j=i+1;j<t;j++)
		{
			if(s[j]==s[i])
				s[j]='#';
		}
	}
	for(int i=0;i<t;i++) 
	{
		if(s[i]!='#')
			cout<<s[i];
	}
    getchar();
    return 0;
}

