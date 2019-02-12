#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int flag=0;
	int la=a.length(),lb=b.length();
	if(la==0)	
	{
		cout<<b;
		return 0;
	}

    for(int i=0;i<la;i++)
    {
    	if(a[i]=='+')
    		flag=1;
    	for(int j=0;j<lb;j++)
    	{
    		if(a[i]==b[j] || tolower(a[i])==b[j] || (flag==1 && (b[j]>='A'&&b[j]<='Z')))
    			b[j]='#';		
		}
	}
	int flag1=0;
	for(int j=0;j<lb;j++)
	{
		if(b[j]!='#')	
		{
			cout<<b[j];
			flag1=1;
		}
	}
	if(flag1==0)
		cout<<endl;
    getchar();
    return 0;
}

