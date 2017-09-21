#include<iostream>
using namespace std;
long reverse(long m)
{
	long j=0;
	while(m)
	{
		j=j*10+m%10;
		m=m/10;
	}
	return j;
}

bool isCircle(long n)
{
	long m;
	m=reverse(n);
	if(m==n)
		return true;
	else
		return false;
}

void palindrome(long low,long high)
{
	for(long i=low;i<=high;i++)
	{
		if(isCircle(i) && isCircle(i*i) && isCircle(i*i*i))
			cout<<i<<" ";
	}
}

int main()
{
	cout<<"The palindrome numbers between 11~999 are"<<endl;
	palindrome(11,999);
    getchar();
    return 0;
}

