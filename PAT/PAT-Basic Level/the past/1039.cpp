#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
    	for(int j=0;j<b.length();j++)
    	{
    		if(a[i]==b[j])
    		{
    			a[i]='#';
    			b[j]='#';
    			break;
			}
		}
	}
	int t1=0,t2=0;
	for(int i=0;i<a.length();i++)
		if(a[i]!='#')
			t1++;
	for(int j=0;j<b.length();j++)
		if(b[j]!='#')
			t2++;
	if(t2==0 && t1>=0)
		cout<<"Yes "<<t1;
	else
		cout<<"No "<<t2;
	
    getchar();
    return 0;
}

