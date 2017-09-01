#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
	cin>>str;
	int len=str.length();
	int *s=new int[len];
	int i,sum=0,num=0;
	for(i=0;i<len;i++){
		num=str[i]- '0';
		sum=sum+num;
	}
	string temp[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	if(sum==0)
		cout<<temp[0];
	else
	{
	while(sum!=0)
	{
	
		s[i]=sum%10;
		sum=sum/10;
	}
	for(int k=i-1;k>0;k--)
		cout<<temp[s[k]]<<" ";
	cout<<temp[s[0]];
	
	}
	delete  [] s;
    getchar();
    return 0;
}

