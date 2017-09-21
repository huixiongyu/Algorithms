#include<iostream>
using namespace std;
bool IsNarcissus(int a)
{
	int sum=0,tmp;
	tmp=a;
	while(tmp>0)
	{
		sum=sum+(tmp%10)*(tmp%10)*(tmp%10);
		tmp=tmp/10;
	}
	if(sum==a)
		return true;
	else 
		return false;
}

void Narcissus()
{
	int i;
	for(i=100;i<=999;i++)
		if(IsNarcissus(i))
			cout<<i<<" ";
			
}


int main()
{
	cout<<"The Narcissus numbers below are"<<endl;
	Narcissus();
    getchar();
    return 0;
}

