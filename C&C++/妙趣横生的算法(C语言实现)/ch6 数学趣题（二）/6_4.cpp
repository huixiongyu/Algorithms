#include<iostream>
using namespace std;
void proveJiaoGu(int n)
{
	int count=1;
	while(n!=1 && count<=1000)
	{
		if(n%2==0)
		{
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
		}
		else 
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			n=n*3+1;
		}
		count++;
	}
	if(count<1000 && n==1)
		cout<<"This natural number is according to JiaoGu Guess\n";
	
}
int main()
{	
	int num;
	cout<<"Please input  a number to verify\n";
	cin>>num;
	cout<<"----------testing----------"<<endl;
	proveJiaoGu(num);
    getchar();
    return 0;
}

