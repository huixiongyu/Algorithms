#include<iostream>
using namespace std;

int main()
{
    int s[10]={0};
    int num[50]={0};
    int len=0;
    for(int i=0;i<10;i++)
    {
    	cin>>s[i];
    	len+=s[i];
	}
	for(int i=1;s[i]!=0;i++)
	{
		num[0]=i;
		s[i]=s[i]-1;
		break;
	}
	int k=1;	
    for(int j=0;j<10;j++)
    {
		if(s[j]>0)
		{
			for(int t=s[j];t>0;t--)
				num[k++]=j;
			
			
		}
	}
	for(int t=0;t<len;t++)
		cout<<num[t];
    getchar();
    return 0;
}

