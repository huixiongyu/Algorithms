#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int len1=s1.length(),len2=s2.length(),len3=s3.length(),len4=s4.length();
	int len;
	char ch[3];
	if(len1>len2)    
		len=len2;
	else
		len=len1;
	int i;
	for(i=0;i<len;i++)
	{
		if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G')
		{
			ch[0]=s1[i];
			break;	
		}
		
	}
	for(int j=i+1;j<len;j++)
	{
		if(s1[j]==s2[j] && ((s1[j]>='A'&&s1[j]<='N') || (s1[j]>='0'&&s1[j]<='9')))
		{
				ch[1]=s1[j];
				break;
		}
	}
	int min=len3<len4 ? len3 : len4 ;
	int pos=0;
	for(int k=0;k<min;k++)
	{
		if(s3[k]==s4[k] && ( (s3[k]>='a'&&s3[k]<='z') || (s3[k]>='A'&&s3[k]<'Z')  ))	//这个条件非常关键，否则可能出现异常值 
		{
			pos=k;
			break;
		}
	}
	const string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int num=ch[0]-'A';
	int hour;
	if(ch[1]>='0'&&ch[1]<='9')
		hour=ch[1]-'0';
	else
		hour=ch[1]-'A'+10;
	cout<<week[num]<<" ";
	if(hour>=0&&hour<=9)
		cout<<0<<hour<<":";
	else
		cout<<hour<<":";
	if(pos>=0&&pos<=9)
		cout<<0<<pos;
	else
		cout<<pos;
    getchar();
    return 0;
}

