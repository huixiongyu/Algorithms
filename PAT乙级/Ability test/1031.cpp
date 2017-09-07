#include<iostream>
#include<string>
using namespace std;
bool func(string s){
	int sum=0;
	int a[18];
	for(int i=0;i<17;i++)
		a[i]=s[i]-'0';
	if(s[17]=='X')
		a[17]=10;
	else
		a[17]=s[17]-'0';
	int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	for(int i=0;i<17;i++)
		sum=sum+a[i]*w[i];
	int Z=sum%11;
	int M[11]={1,0,10,9,8,7,6,5,4,3,2};
	if(a[17]!=M[Z])
	{
		for(int i=0;i<17;i++)
			cout<<s[i];
		if(s[17]=='X') 
			cout<<"X"<<endl;
		else
			cout<<a[17]<<endl;
		return true;
	}
	else
		return false;	
	
}

int main()
{
    int N,count=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
    	string s;
    	cin>>s;
    	if(func(s))
    		count++;
	}
	if(count==0)
		cout<<"All passed";
    getchar();
    return 0;
}


