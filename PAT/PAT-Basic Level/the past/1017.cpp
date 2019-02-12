#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int len=s.length();
    int t=0,res=0;
    t=(s[0]-'0')/n;
    if((t!=0 && len>1) || len==1)
    	cout<<t;
    res=(s[0]-'0')%n;
	for(int i=1;i<len;i++)    
	{
		t=(res*10+s[i]-'0')/n;
		cout<<t;
		res=(res*10+s[i]-'0')%n;
	}
	cout<<" "<<res;
    getchar();
    return 0;
}

